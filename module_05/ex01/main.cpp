/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rovillar <rovillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 17:56:50 by romain            #+#    #+#             */
/*   Updated: 2023/06/05 18:25:01 by rovillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try {
        Bureaucrat  bureaucrat("bob", 130);
        Form        form("49.3", 129);
        std::cout << form << std::endl;
        std::cout << bureaucrat << std::endl;
        bureaucrat.signForm(form);
        form.beSigned(bureaucrat);
    } catch (std::exception &e){
        std::cout << e.what() << std::endl;
    }
    return 0;
}