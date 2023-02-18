#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    this->_index = 0;
}

PhoneBook::~PhoneBook()
{
}

void    PhoneBook::Welcome(void) const
{ 
    std::cout << " ________________________________________ " << std::endl;
    std::cout << "|     Welcome in your phone directory    |" << std::endl;
    std::cout << "|----------------------------------------|" << std::endl;
    std::cout << "|     Use \"ADD\" to add a new contact     |" << std::endl;
    std::cout << "|----------------------------------------|" << std::endl;
    std::cout << "|    Use \"SEARCH\" to search a contact    |" << std::endl;
    std::cout << "|----------------------------------------|" << std::endl;
    std::cout << "|Use \"EXIT\" to leave your phone directory|" << std::endl;
    std::cout << " ¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯ " << std::endl;
}

void    PhoneBook::AddContact(void)
{
    this->_index++;
    if (this->_index > 8)
        this->_index = 1;
    this->_contact[this->_index].init_contact();
}

void     PhoneBook::PrintList(void) const
{
    std::cout << std::endl;
    std::cout << "------------- LIST OF CONTACTS -------------" << std::endl;
    for (int i = 1; i <= 8; i++)
        this->_contact[i].print_contact(i);
    std::cout << std::endl;
}

void    PhoneBook::IndexContact(void) const
{
    std::cout << "Enter index of the contact > " << std::flush;
    std::string input = "";
    std::cin >> input;
    try
    {
        int index = std::stoi(input);
        if (index >= 1 && index <= 8)
            this->_contact[index].print_one(index);
        else
        {
            std::cin.clear();
            std::cout << "Invalid index" << std::endl;
        }
    }
    catch (const std::invalid_argument& e)
    {
        std::cin.clear();
        std::cout << "Invalid caractere" << std::endl;
        this->IndexContact();
    }
}