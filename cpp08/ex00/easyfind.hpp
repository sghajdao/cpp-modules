/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sghajdao <sghajdao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 12:47:32 by sghajdao          #+#    #+#             */
/*   Updated: 2022/11/11 12:47:55 by sghajdao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <algorithm>

template<typename T>
typename T::iterator	easyfind(T &container, int goal)
{
	typename T::iterator	result = find(container.begin(), container.end(), goal);

	if (result == container.end())
		return container.end();
	return result;
}

#endif
