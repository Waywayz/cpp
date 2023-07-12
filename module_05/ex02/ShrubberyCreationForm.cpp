/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rovillar <rovillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 17:56:35 by romain            #+#    #+#             */
/*   Updated: 2023/06/05 18:24:46 by rovillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target) : Form("ShrubberyCreationForm", 145, 137), _target(target) {
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) : Form(other), _target(other._target) {
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm& other) {
    (void)other;
    return *this;
}

void    ShrubberyCreationForm::execute(const Bureaucrat& executor) const {
    if (this->getIsSigned() == false)
        throw Form::NotSignedException();
    else if (executor.getGrade() > this->getGradeToExec()) {
        throw Form::GradeTooLowException();
    }

    std::ofstream   outfile((getName() + "_shrubbery").c_str());
    if (!outfile.is_open()) {
        std::cout << "Unable to open file." << std::endl;
        return;
    }

    outfile << "             ,@@@@@@@,\n"
            << "     ,,,.   ,@@@@@@/@@,  .oo8888o.\n"
            << "  ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n"
            << ",%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n"
            << "%&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n"
            << "%&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n"
            << "`&%\\ ` /%&'    |.|        \\ '|8'\n"
            << "    |o|        | |         | |\n"
            << "    |.|        | |         | |\n"
            << " \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_\n";
    outfile.close();
    std::cout << "File created: " << getName() << "_shrubbery" << std::endl;
}