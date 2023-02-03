#include "Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

std::string Contact::add_info(std::string str) const
{
    std::string input;

    std::cout << str;
    std::getline(std::cin, input);
    if (input.empty())
    {
        std::cin.clear();
        std::cout << "Please introduce a valid data" << std::endl;
        this->add_info(str);
    }
    return (input);
}

void        Contact::init_contact(void)
{
    std::cin.ignore();
    this->_firstname = this->add_info("Enter First Name > ");
    this->_lastname = this->add_info("Enter Last Name > ");
    this->_nickname = this->add_info("Enter Nickname > ");
    this->_phonenumber = this->add_info("Enter Phone Number > ");
    this->_darkestsecret = this->add_info("Enter Darkest secret > ");
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
        std::cout << "This contact doesn't exit" << std::endl;
        return ;
    }
    std::cout << std::endl;
    std::cout << "------ CONTACT #" << index << " ------" << std::endl;
    std::cout << "First Name:\t" << this->_firstname << std::endl;
    std::cout << "Last Name:\t" << this->_lastname << std::endl;
    std::cout << "Nickname:\t" << this->_nickname << std::endl;
    std::cout << std::endl;
}