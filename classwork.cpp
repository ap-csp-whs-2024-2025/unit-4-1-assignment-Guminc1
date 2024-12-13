#include <iostream>
#include <string>
#include <thread>
#include <chrono>

void password(std::string& Answer) {
    if (Answer == "Skibidi") {
        std::cout << "Hello Master" << "\n";
    } else {
        std::cout << "Wrong" << "\n";
        std::this_thread::sleep_for(std::chrono::seconds(1)); 
        std::cout << "Try again" << "\n"; 
        std::cin >> Answer; 
        password(Answer);
    }
}

int main() {
    std::string Answer;
    std::cout << "What is the password?" << "\n";
    std::cin >> Answer;

    password(Answer);

    return 0;
}
