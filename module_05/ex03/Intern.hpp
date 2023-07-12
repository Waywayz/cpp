/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rovillar <rovillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 18:23:43 by rovillar          #+#    #+#             */
/*   Updated: 2023/06/05 18:40:30 by rovillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"

class Intern {
    
private:

public:

    Intern();
    Intern(const Intern& other);
    ~Intern();
    Intern& operator=(const Intern& other);

    Form* makeForm(std::string name, std::string target);
    
};

#endif