#include "Harl.hpp"

Harl::Harl() {
}

Harl::~Harl() {
}

void    Harl::_debug() {
    std::cout << "[ DEBUG ]" << std::endl
                << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl
                << "I really do !" << std::endl << std::endl;
}

void    Harl::_info() {
    std::cout << "[ INFO ]" << std::endl
                << "I cannot believe adding extra bacon costs more money." << std::endl
                << "You didn’t put enough bacon in my burger !" << std::endl
                << "If you did, I wouldn’t be asking for more !" << std::endl << std::endl;
}

void    Harl::_warning() {
    std::cout << "[ WARNING ]" << std::endl
              << "I think I deserve to have some extra bacon for free." << std::endl
              << "I've been coming for years whereas you started working here since last month." << std::endl << std::endl;
}

void    Harl::_error() {
    std::cout << "[ ERROR ]" << std:: endl
                << "This is unacceptable ! I want to speak to the manager now." << std::endl << std::endl;

}

void    Harl::complain( std::string level ) {
    void (Harl::*ptr[4])() = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
	std::string levels[5] = {"debug", "info", "warning", "error", "exit"};
    int i = 0;
    while (i < 5 && levels[i].compare(level))
        i++;
    switch(i) {
        case 0:
            ((this->*ptr[0])());
            ((this->*ptr[1])());
            ((this->*ptr[2])());
            ((this->*ptr[3])());
            break ;
        case 1:
            ((this->*ptr[1])());
            ((this->*ptr[2])());
            ((this->*ptr[3])());
            break ;
        case 2:
            ((this->*ptr[2])());
            ((this->*ptr[3])());
            break ;
        case 3:
            ((this->*ptr[3])());
            break ;
        case 4:
            std::cout << "[ Exit Harl ]" << std::endl;
            break ;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            return ;
    }
}

/*
    Erreur de compilation si absence de break ;
*/