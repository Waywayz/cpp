/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romain <romain@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 14:11:21 by romain            #+#    #+#             */
/*   Updated: 2023/05/18 14:11:22 by romain           ###   ########.fr       */
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