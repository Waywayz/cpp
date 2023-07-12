/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rovillar <rovillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 04:16:21 by rovillar          #+#    #+#             */
/*   Updated: 2023/06/09 04:47:47 by rovillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <unistd.h>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void)
{
    // Initialisation du générateur de nombres aléatoires
    std::srand(static_cast<unsigned int>(std::time(NULL)));

    // Génération d'un nombre aléatoire entre 0 et 2
    int randomNumber = std::rand() % 3;

    // Création et retour de l'instance correspondante
    if (randomNumber == 0) {
        return new A();
    } else if (randomNumber == 1) {
        return new B();
    } else {
        return new C();
    }
}

void identify(Base* p) {
    if (dynamic_cast<A*>(p)) {
        std::cout << "A" << std::endl;
    } else if (dynamic_cast<B*>(p)) {
        std::cout << "B" << std::endl;
    } else if (dynamic_cast<C*>(p)) {
        std::cout << "C" << std::endl;
    }
}

void identify(Base& p) {
    try {
        dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
    } catch (std::exception &e) {
        try {
            dynamic_cast<B&>(p);
            std::cout << "B" << std::endl;
        } catch (std::exception &e) {
            try {
                dynamic_cast<C&>(p);
                std::cout << "C" << std::endl;
            } catch (std::exception &e) {
                std::cout << "Unknown" << std::endl;
            }
        }
    }
}

int main()
{
	Base	*base;

	// srand(time(NULL));

	base = generate();
	std::cout << "res: ";
	identify(base);
    std::cout << "res: ";
    identify(*base);
	delete base;

	usleep(4242420);
	
	base = generate();
	std::cout << "res: ";
	identify(*base);
    std::cout << "res: ";
    identify(base);
	delete base;
	
	return 0;
}