/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rovillar <rovillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 18:04:28 by romain            #+#    #+#             */
/*   Updated: 2023/06/05 18:24:07 by rovillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string& target) : Form("Robotomy Request Form", 25, 5), _target(target) {
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) : Form(other), _target(other._target) {
}

PresidentialPardonForm::~PresidentialPardonForm() {
}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm& other) {
    (void)other;
    return *this;
}

void    PresidentialPardonForm::execute(const Bureaucrat& executor) const {
    if (executor.getGrade() > this->getGradeToExec())
        throw Form::GradeTooLowException();
    else {
        std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
    }
}