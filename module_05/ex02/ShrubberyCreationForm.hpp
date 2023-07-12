/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rovillar <rovillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 17:56:37 by romain            #+#    #+#             */
/*   Updated: 2023/06/05 18:24:48 by rovillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM
#define SHRUBBERYCREATIONFORM

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form
{

private:

    const std::string   _target;

    ShrubberyCreationForm();

public:

    ShrubberyCreationForm(const std::string& target);
    ShrubberyCreationForm(const ShrubberyCreationForm& other);
    ~ShrubberyCreationForm();
    ShrubberyCreationForm&  operator=(ShrubberyCreationForm& other);

    void    execute(const Bureaucrat& executor) const;
};

#endif