/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 14:14:15 by romain            #+#    #+#             */
/*   Updated: 2023/05/17 14:14:16 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap bob( "Bob" );
    DiamondTrap bob2( bob );
    DiamondTrap bob3("test");

    bob.whoAmI();
    bob2.whoAmI();
    bob3 = bob;
    bob3.whoAmI();
    bob.attack("Fizz");
    bob.takeDamage(200);
    bob.beRepaired(42);
}