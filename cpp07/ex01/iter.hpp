/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghajdao <sghajdao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 17:03:27 by sghajdao          #+#    #+#             */
/*   Updated: 2022/11/07 16:23:46 by sghajdao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T>
void iter(T *t, size_t size, void (*call)(T const &))
{
    if (t == NULL || call == NULL)
        return ;
    for(size_t i = 0; i < size; i++)
        call(t[i]);
}

#endif
