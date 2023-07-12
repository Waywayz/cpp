#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
private:

    Contact _contact[9];
    int     _index;

public:

    PhoneBook();
    ~PhoneBook();

    void    Welcome() const;
    void    AddContact();
    void    PrintList() const;
    void    IndexContact() const;
};

#endif