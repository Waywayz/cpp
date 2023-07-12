/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 14:10:57 by romain            #+#    #+#             */
/*   Updated: 2023/05/18 14:10:58 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    delete j;//should not create a leak
    delete i;

    const int size = 10;
    const Animal *animals[size];

    for (int x = 0; x < size/2; x++) {
        animals[x] = new Dog();
    }

    std::cout << "----- 1er moitie de tableau rempli de dog -----" << std::endl;

    for (int x = size/2; x < size; x++) {
        animals[x] = new Cat();
    }

    std::cout << "----- 2eme moitie de tableau rempli de cat -----" << std::endl;

    for (int x = 0; x < size; x++) {
        delete animals[x];
    }

    std::cout << "----- Tableau entierement delete -----" << std::endl;

    return 0;
}
