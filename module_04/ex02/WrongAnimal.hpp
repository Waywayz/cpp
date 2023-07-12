/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 14:11:44 by romain            #+#    #+#             */
/*   Updated: 2023/05/18 14:11:45 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include "iostream"

class WrongAnimal
{

protected:

    std::string _type;

public:

    WrongAnimal();
    WrongAnimal(std::string type);
    WrongAnimal(const WrongAnimal &other);
    WrongAnimal& operator=(const WrongAnimal &other);
    ~WrongAnimal();

    std::string getType() const;
    void        makeSound() const;

};

#endif