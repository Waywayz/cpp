/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rovillar <rovillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 17:56:30 by romain            #+#    #+#             */
/*   Updated: 2023/06/05 18:24:11 by rovillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string& target) : Form("Robotomy Request Form", 72, 45), _target(target) {
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) : Form(other), _target(other._target) {
}

RobotomyRequestForm::~RobotomyRequestForm() {
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm& other) {
    (void)other;
    return *this;
}

void    RobotomyRequestForm::execute(const Bureaucrat& executor) const {
    if (executor.getGrade() > this->getGradeToExec())
        throw Form::GradeTooLowException();
    else {
        static int  i;
        if (i % 2 == 0)
            std::cout << "BZZZZZ! " << _target << " has been robotomized!" << std::endl;
        else
            std::cout << "Robotomy failed! " << _target << " is still alive." << std::endl;
        i++;
    }
}