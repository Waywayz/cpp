/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 14:10:49 by romain            #+#    #+#             */
/*   Updated: 2023/05/18 14:10:51 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat: public Animal
{

private:

    Brain*  _brain;

public:

    Cat();
    Cat(const Cat& other);
    Cat&    operator=(const Cat &other);
    ~Cat();

    void    makeSound() const;

};

#endif