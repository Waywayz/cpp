#include <iostream>
#include <string>

int main() {
  std::string string = "HI THIS IS BRAIN";
  std::string* stringPTR = &string;
  std::string& stringREF = string;

  std::cout << "Adresse de la string: " << &string << std::endl;
  std::cout << "Adresse stockée dans stringPTR: " << stringPTR << std::endl;
  std::cout << "Adresse stockée dans stringREF: " << &stringREF << std::endl;

  std::cout << "Valeur de la string: " << string << std::endl;
  std::cout << "Valeur pointée par stringPTR: " << *stringPTR << std::endl;
  std::cout << "Valeur pointée par stringREF: " << stringREF << std::endl;

  return 0;
}
