#include "PhoneBook.hpp"

int main()
{
    PhoneBook   directory;

    std::string input = "";
    directory.Welcome();
    while (input.compare("EXIT"))
    {
        if (input.compare("ADD") == 0)
            directory.AddContact();
        else if (input.compare("SEARCH") == 0)
        {
            directory.PrintList();
            directory.IndexContact();
        }
        std::cout << "> " << std::flush;
        std::cin >> input;
    }
    return 0;
}
