/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rovillar <rovillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 17:56:25 by romain            #+#    #+#             */
/*   Updated: 2023/06/05 18:23:58 by rovillar         ###   ########.fr       */
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

    Form(const std::string& name, int gradeToSign, int gradeToExec);
    Form(const Form& other);
    virtual ~Form();
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

    class NotSignedException : public std::exception {
        public:
            virtual const char* what() const throw() {return "Form not signed";}
    };

    void        beSigned(const Bureaucrat& bureaucrat);

    virtual void execute(Bureaucrat const & executor) const = 0;

};

std::ostream&   operator<<(std::ostream& os, const Form& other);

#endif