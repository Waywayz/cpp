/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rovillar <rovillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 18:23:59 by rovillar          #+#    #+#             */
/*   Updated: 2023/06/05 21:17:55 by rovillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern() {
}

Intern::Intern(const Intern& other) {
    *this = other;
}

Intern::~Intern() {
}

Intern& Intern::operator=(const Intern& other) {
    (void)other;
    return (*this);
}

Form*   makeRobotomyRequestForm(std::string target) {
    return new RobotomyRequestForm(target);
}

Form*   makePresidentialPardonForm(std::string target) {
    return new PresidentialPardonForm(target);
}

Form*   makeShrubberyCreationForm(std::string target) {
    return new ShrubberyCreationForm(target);
}

Form*   Intern::makeForm(std::string name, std::string target) {
    
    typedef Form *(*funcPtr)(std::string target);

    std::string formNames[3] = {
        "robotomy request",
        "presidential pardon",
        "shrubbery creation"
    };

    funcPtr funcArray[3] = {
        &makeRobotomyRequestForm,
        &makePresidentialPardonForm,
        &makeShrubberyCreationForm
    };
    
    for (int i(0); i < 3; i++) {
        if (name == formNames[i]) {
            std::cout << "Intern creates " << name << std::endl;
            return (funcArray[i])(target);
        }
    }
    
    std::cout << "Intern cannot create " << name << " form" << std::endl;
    
    return NULL;
}