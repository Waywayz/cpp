/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 14:10:54 by romain            #+#    #+#             */
/*   Updated: 2023/05/18 14:10:56 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog: public Animal
{
private:

    Brain* _brain;

public:

    Dog();
    Dog(const Dog &other);
    Dog&    operator=(const Dog &other);
    ~Dog();

    void    makeSound() const;
};

#endif