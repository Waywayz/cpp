/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 14:13:32 by romain            #+#    #+#             */
/*   Updated: 2023/05/17 14:13:33 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main() {
    ScavTrap scav("Bob");

    scav.attack("Tom");
    scav.takeDamage(5);
    scav.beRepaired(10);
    scav.guardGate();
    return 0;
}