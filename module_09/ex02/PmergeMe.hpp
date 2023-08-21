/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rovillar <rovillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 23:58:12 by rovillar          #+#    #+#             */
/*   Updated: 2023/08/22 00:06:36 by rovillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <algorithm>
#include <ctime>
#include <vector>
#include <list>
#include <string>
#include <cstdlib>
#include <sstream>
#include <exception>

class PmergeMe {

public:

    PmergeMe(void);
    PmergeMe(const PmergeMe& to_copy);
    PmergeMe &operator=(const PmergeMe& to_copy);
    ~PmergeMe(void);

    void sortVec(int argc, char **argv);
    void sortList(int argc, char **argv);

    class InvalidElementException : public std::exception {
        public:
            virtual const char* what() const throw();  
    };
};

#endif