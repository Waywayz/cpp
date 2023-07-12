/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rovillar <rovillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 05:03:20 by rovillar          #+#    #+#             */
/*   Updated: 2023/06/09 05:04:03 by rovillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T>
void    swap(T &src1, T &src2)
{
    T   tmp;
    tmp = src1;
    src1 = src2;
    src2 = tmp;
}

template <typename T>
T    min(T &src1, T &src2)
{
    if (src1 < src2)
        return src1;
    else
        return src2;
}

template <typename T>
T    max(T &src1, T &src2)
{
    if (src1 > src2)
        return src1;
    else
        return src2;
}

#endif