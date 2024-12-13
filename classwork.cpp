#include <iostream>
#include <string>

int main()
{
  std::string Answer; 
  std::cout << "What is the password?" << "\n";
  std::cin >> Answer;

  if (Answer == "Skibidi") {
    std::cout << "Hello Master" << "\n";
  } else {
    std::cout << "Wrong" << "\n";
  }

  return 0;
}
