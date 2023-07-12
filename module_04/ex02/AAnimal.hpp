/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 14:11:16 by romain            #+#    #+#             */
/*   Updated: 2023/05/18 14:11:17 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

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
    virtual void    makeSound() const = 0;

};

#endif