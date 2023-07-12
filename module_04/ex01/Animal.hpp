/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 14:10:38 by romain            #+#    #+#             */
/*   Updated: 2023/05/18 14:10:39 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include "Brain.hpp"
# include <iostream>

class Animal
{

protected:

    std::string _type;

public:

    Animal();
    Animal(std::string type);
    Animal(const Animal &other);
    Animal& operator=(const Animal &other);
    virtual ~Animal();

    std::string     getType() const;
    virtual void    makeSound() const;

};

#endif