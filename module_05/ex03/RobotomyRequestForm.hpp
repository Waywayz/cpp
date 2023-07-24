/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rovillar <rovillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 17:56:32 by romain            #+#    #+#             */
/*   Updated: 2023/07/25 00:31:28 by rovillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form
{

private:

    const std::string   _target;

    RobotomyRequestForm();

public:

    RobotomyRequestForm(const std::string &target);
    RobotomyRequestForm(const RobotomyRequestForm &other);
    ~RobotomyRequestForm();
    RobotomyRequestForm& operator=(RobotomyRequestForm &other);

    void    execute(const Bureaucrat& executor) const;

};

#endif