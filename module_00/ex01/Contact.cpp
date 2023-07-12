#include "Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

std::string Contact::_add_info(std::string str) const
{
    std::string input = "";
    std::cout << str;
    std::getline(std::cin, input);
    while (input.empty())
    {
        std::cin.clear();
        std::cout << "Empty strings are not allowed" << std::endl;
        std::cout << str;
        std::getline(std::cin, input);
    }
    return (input);
}

void        Contact::init_contact(void)
{
    std::cin.ignore();
    std::cout << std::endl;
    this->_firstname = this->_add_info("Enter First Name > ");
    this->_lastname = this->_add_info("Enter Last Name > ");
    this->_nickname = this->_add_info("Enter Nickname > ");
    this->_phonenumber = this->_add_info("Enter Phone Number > ");
    this->_darkestsecret = this->_add_info("Enter Darkest secret > ");
    std::cout << std::endl;
}

void        Contact::print_contact(int i) const
{
    if (this->_firstname.empty())
        return ;
    std::cout << "|" << std::right << std::setw(10) << i;
    std::cout << "|" << std::right << std::setw(10) << (this->_firstname.length() > 10 ? this->_firstname.substr(0, 9) + "." : this->_firstname);
    std::cout << "|" << std::right << std::setw(10) << (this->_lastname.length() > 10 ? this->_lastname.substr(0, 9) + "." : this->_lastname);
    std::cout << "|" << std::right << std::setw(10) << (this->_nickname.length() > 10 ? this->_nickname.substr(0, 9) + "." : this->_nickname);
    std::cout << "|" << std::endl;
}

void        Contact::print_one(int index) const
{
    if (this->_firstname.empty())
    {
        std::cout << "This contact doesn't exist" << std::endl;
        return ;
    }
    std::cout << std::endl;
    std::cout << "------ CONTACT #" << index << " ------" << std::endl;
    std::cout << "First Name:\t" << this->_firstname << std::endl;
    std::cout << "Last Name:\t" << this->_lastname << std::endl;
    std::cout << "Nickname:\t" << this->_nickname << std::endl;
    std::cout << "Phone Number:\t" << this->_phonenumber << std::endl;
    std::cout << std::endl;
}