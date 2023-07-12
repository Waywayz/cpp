/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rovillar <rovillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 18:04:30 by romain            #+#    #+#             */
/*   Updated: 2023/06/05 18:24:39 by rovillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{

private:

    const std::string   _target;

    PresidentialPardonForm();

public:

    PresidentialPardonForm(const std::string &target);
    PresidentialPardonForm(const PresidentialPardonForm &other);
    ~PresidentialPardonForm();
    PresidentialPardonForm& operator=(PresidentialPardonForm &other);

    void    execute(const Bureaucrat& executor) const;

};

#endif