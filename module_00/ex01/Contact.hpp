#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <iomanip>

class Contact
{

private:

    std::string _firstname;
    std::string _lastname;
    std::string _nickname;
    std::string _phonenumber;
    std::string _darkestsecret;
    std::string _add_info(std::string str) const;

public:

    Contact();
    ~Contact();

    void        init_contact();
    void        print_contact(int i) const;
    void        print_one(int index) const;

};

#endif