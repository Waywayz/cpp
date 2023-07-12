/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rovillar <rovillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 17:56:57 by romain            #+#    #+#             */
/*   Updated: 2023/06/05 18:25:09 by rovillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    std::string name;
    int         grade;

    std::cout << "NAME > ";
    std::cin >> name;
    std::cout << "GRADE > ";
    std::cin >> grade;

    try {
        Bureaucrat bureaucrat(name, grade);
        std::cout << bureaucrat << std::endl;
        bureaucrat.incrementGrade();
        // bureaucrat.decrementGrade();
    } catch (Bureaucrat::GradeTooLowException &e) {
        std::cout << e.what() << std::endl;
    } catch (Bureaucrat::GradeTooHighException &e) {
        std::cout << e.what() << std::endl;
    }
}