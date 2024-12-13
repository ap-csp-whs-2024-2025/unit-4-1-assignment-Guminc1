#include <iostream>
#include <string>

void password(std::string& Answer) {
    if (Answer == "Skibidi") {
        std::cout << "Hello Master" << "\n";
    } else {
        std::cout << "Wrong, try again" << "\n";
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
