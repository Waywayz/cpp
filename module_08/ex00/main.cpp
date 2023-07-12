/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rovillar <rovillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 14:18:21 by rovillar          #+#    #+#             */
/*   Updated: 2023/06/13 14:50:16 by rovillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main() {
	std::string white_code = "\001\033[1m\033[37m\002";
	std::string reset_code = "\001\033[0;0m\002";
	std::cout << white_code << "----list<> TEST-----" << reset_code << std::endl;
    
    try {
        std::list<int> list;
        list.push_back(1);
        list.push_back(2);
        list.push_back(3);
        list.push_back(4);
        list.push_back(5);


        int searchValue = 3;
        std::list<int>::iterator result = easyfind(list, searchValue);
        std::cout << "Found value " << searchValue << " at index: " << std::distance(list.begin(), result) << std::endl;
        
        searchValue = 6;
        result = easyfind(list, searchValue);
        std::cout << "Found value " << searchValue << " at index: " << std::distance(list.begin(), result) << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

	std::cout << white_code << "\n----vector<> TEST-----" << reset_code << std::endl;

    try {
        std::vector<int> vec;
        vec.push_back(25);
        vec.push_back(26);
        vec.push_back(32);
        vec.push_back(33);
        vec.push_back(34);


        int searchValue = 34;
        std::vector<int>::iterator result = easyfind(vec, searchValue);
        std::cout << "Found value " << searchValue << " at index: " << std::distance(vec.begin(), result) << std::endl;
        
        searchValue = 6;
        result = easyfind(vec, searchValue);
        std::cout << "Found value " << searchValue << " at index: " << std::distance(vec.begin(), result) << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
