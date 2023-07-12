/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rovillar <rovillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 17:56:16 by romain            #+#    #+#             */
/*   Updated: 2023/06/05 18:23:50 by rovillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {
}

Bureaucrat::Bureaucrat(const std::string& name, int grade) : _name(name), _grade(grade){
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& other): _name(other._name), _grade(other._grade){
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other) {
    if (this != &other)
        _grade = other._grade;
    return *this;
}

Bureaucrat::~Bureaucrat() {
}

std::string Bureaucrat::getName() const {
    return _name;
}

int         Bureaucrat::getGrade() const {
    return _grade;
}

void        Bureaucrat::incrementGrade() {
    if (_grade - 1 < 1)
        throw Bureaucrat::GradeTooHighException();
    _grade--;
}

void        Bureaucrat::decrementGrade() {
    if (_grade + 1 > 150)
        throw Bureaucrat::GradeTooLowException();
    _grade++;
}

void        Bureaucrat::signForm(Form& other)
{
    try {
        other.beSigned(*this);
        std::cout << *this << " signed " << other.getName() << std::endl;
    } catch (Form::GradeTooLowException &e) {
        std::cout << this->_name << " coudn't sign " << other.getName() << " because " << e.what() << std::endl;
    }
}

void        Bureaucrat::executeForm(Form const & form)
{
    try {
        form.execute(*this);
    } catch (std::exception &e) {
        std::cout << " coudn't execute " << form.getName() << " because " << e.what() << std::endl;
    }
}

std::ostream&   operator<<(std::ostream& os, const Bureaucrat& other) {
    os << other.getName() << ", bureaucrat grade " << other.getGrade();
    return os;
}
