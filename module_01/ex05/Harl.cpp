#include "Harl.hpp"

Harl::Harl() {
}

Harl::~Harl() {
}

void    Harl::_debug() {
    std::cout << "[ DEBUG ]" << std::endl
                << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl
                << "I really do !" << std::endl;
}

void    Harl::_info() {
    std::cout << "[ INFO ]" << std::endl
                << "I cannot believe adding extra bacon costs more money." << std::endl
                << "You didn’t put enough bacon in my burger !" << std::endl
                << "If you did, I wouldn’t be asking for more !" << std::endl;
}

void    Harl::_warning() {
    std::cout << "[ WARNING ]" << std::endl
              << "I think I deserve to have some extra bacon for free." << std::endl
              << "I've been coming for years whereas you started working here since last month." << std::endl;
}

void    Harl::_error() {
    std::cout << "[ ERROR ]" << std:: endl
                << "This is unacceptable ! I want to speak to the manager now." << std::endl;

}

void    Harl::complain( std::string level ) {
    void (Harl::*ptr[4])() = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
	std::string levels[4] = {"debug", "info", "warning", "error"};
    for (int i = 0; i < 4; i++) {
        if (!levels[i].compare(level)) {
            (this->*ptr[i])();
            return ;
        }
    }
}
