/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rovillar <rovillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 17:56:19 by romain            #+#    #+#             */
/*   Updated: 2023/06/05 18:23:52 by rovillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat
{

private:

    const std::string _name;
    int _grade;
    Bureaucrat();

public:

    Bureaucrat(const std::string& name, int grade);
    Bureaucrat(const Bureaucrat &other);
    ~Bureaucrat();
    Bureaucrat& operator=(const Bureaucrat& other);

    std::string getName() const;
    int         getGrade() const;
    void        incrementGrade();
    void        decrementGrade();

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

    void        signForm(Form& other);

    void        executeForm(Form const & form);

};

std::ostream&   operator<<(std::ostream& os, const Bureaucrat& other);

#endif