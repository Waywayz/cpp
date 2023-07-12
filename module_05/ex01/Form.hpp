/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rovillar <rovillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 17:56:47 by romain            #+#    #+#             */
/*   Updated: 2023/06/05 18:24:59 by rovillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{

private:

    const std::string   _name;
    bool                _isSigned;
    int                 _gradeToSign;
    int                 _gradeToExec;
    Form();

public:

    Form(const std::string& name, int gradeToSign);
    Form(const Form& other);
    ~Form();
    Form& operator=(const Form& other);

    std::string getName() const;
    bool        getIsSigned() const;
    int         getGradeToSign() const;
    int         getGradeToExec() const;

    class GradeTooHighException : public std::exception
    {
        public:
            virtual const char* what() const throw() {return "Grade too high";}
    };

    class GradeTooLowException : public std::exception
    {
        public:
            virtual const char* what() const throw() {return "Grade too low";}
    };

    void        beSigned(const Bureaucrat& bureaucrat);

};

std::ostream&   operator<<(std::ostream& os, const Form& other);

#endif