/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 14:10:45 by romain            #+#    #+#             */
/*   Updated: 2023/05/18 14:10:46 by romain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class   Brain
{

protected:

    std::string _ideas[100];

public:

    Brain();
    Brain(const Brain &other);
    Brain& operator=(const Brain &other);
    ~Brain();

};

#endif