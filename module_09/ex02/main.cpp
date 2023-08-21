/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rovillar <rovillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 23:56:33 by rovillar          #+#    #+#             */
/*   Updated: 2023/08/22 00:28:12 by rovillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

unsigned int ft_stou(const std::string& str)
{
	unsigned int num;
	std::stringstream ss(str);

	ss >> num;
	return num;
}

int main(int argc, char **argv)
{
	if (argc == 1)
	    return 0;
    PmergeMe pmm;

    try {
        for (int i = 1; i < argc; i += 1)
            if (std::string(argv[i]).find_first_not_of("0123456789 ") != std::string::npos)
			    throw PmergeMe::InvalidElementException();

        std::vector<unsigned int>temp;
        for (int i = 1; i < argc; i += 1)
            temp.push_back(ft_stou(argv[i]));

        std::vector<unsigned int>::iterator itr;
        std::vector<unsigned int>::iterator itr2;
        for (itr = temp.begin(); itr != temp.end(); itr++)
        {
            for (itr2 = itr + 1; itr2 != temp.end(); itr2++)
                if (*itr2 == *itr)
			        throw PmergeMe::InvalidElementException();
        }
    }
    catch (std::exception& e) {
        std::cerr << e.what() << '\n';
        return 1;
    }

    pmm.sortVec(argc, argv);
    std::cout << std::endl;
    pmm.sortList(argc, argv);

	return 0;
}