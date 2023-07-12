/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rovillar <rovillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 02:25:21 by rovillar          #+#    #+#             */
/*   Updated: 2023/06/10 02:43:14 by rovillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main() {
    Array<int> intArray(5);

    intArray[0] = 10;
    intArray[1] = 20;
    intArray[2] = 30;
    intArray[3] = 40;
    intArray[4] = 50;

    std::cout << "Affichage des éléments" << std::endl;
    for (size_t i = 0; i < intArray.size(); i++) {
        std::cout << intArray[i] << " ";
    }

    std::cout << std::endl;

    std::cout << "\nTentative d'accès à un élément en dehors de la taille de l'array" << std::endl;
    try {
        intArray[5] = 60;
    } catch (const std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
