/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 14:13:12 by romain            #+#    #+#             */
/*   Updated: 2023/05/17 14:13:13 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{

private:

    std::string _name;
    int         _pdv;
    int         _energy;
    int         _damage;

public:

    ClapTrap(std::string name);
    ClapTrap(const ClapTrap &other);
    ClapTrap    &operator=(const ClapTrap& other);
    ~ClapTrap();

    void        attack(const std::string& target);
    void        takeDamage(unsigned int amount);
    void        beRepaired(unsigned int amount);
};

#endif