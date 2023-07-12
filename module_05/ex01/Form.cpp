/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rovillar <rovillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 17:56:45 by romain            #+#    #+#             */
/*   Updated: 2023/06/05 18:24:57 by rovillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() {
}

Form::Form(const std::string& name, int gradeToSign) : _name(name), _gradeToSign(gradeToSign), _gradeToExec(0) {
    if (_gradeToSign < 1)
        throw Form::GradeTooHighException();
    if (_gradeToSign > 150)
        throw Form::GradeTooLowException();
    _isSigned = false;
}

Form::Form(const Form& other) : _name(other._name), _isSigned(other._isSigned), _gradeToSign(other._gradeToSign), _gradeToExec(other._gradeToExec){
}

Form::~Form() {
}

Form&   Form::operator=(const Form& other) {
    if (this != &other)
        _isSigned = other.getIsSigned();
    return *this;
}

std::string Form::getName() const {
    return _name;
}

bool        Form::getIsSigned() const {
    return _isSigned;
}

int         Form::getGradeToSign() const {
    return _gradeToSign;
}

int         Form::getGradeToExec() const {
    return _gradeToExec;
}

void        Form::beSigned(const Bureaucrat& bureaucrat) {
    if (bureaucrat.getGrade() > _gradeToSign)
        throw Form::GradeTooLowException();
    _isSigned = true;
}

std::ostream&   operator<<(std::ostream& os, const Form& other) {
    os << "======= INFO FORM =======" << std::endl;
    os << "Form name > " << other.getName() << std::endl
        << "Grade to sign > " << other.getGradeToSign() << std::endl
        << "Grade to execute > " << other.getGradeToExec();
    return os;
}