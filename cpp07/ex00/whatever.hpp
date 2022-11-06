/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghajdao <sghajdao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 15:23:27 by sghajdao          #+#    #+#             */
/*   Updated: 2022/11/06 15:23:28 by sghajdao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template <typename T>
void swap(T &a, T &b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}

template <typename M>
M min(M &a, M &b)
{
    if (a == b || a > b){return b;}
    else{return a;}
}

template <typename P>
P max(P &a, P &b)
{
    if (a == b || a < b){return b;}
    else{return a;}
}

#endif
