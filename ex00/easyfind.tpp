/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 10:58:19 by omoreno-          #+#    #+#             */
/*   Updated: 2023/10/06 11:44:53 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _EASYFIND_TPP_
# define _EASYFIND_TPP_
# include <array>

template <typename T>
int& easyfind(const T& t, int n)
{
	std::array<int, 1> to_find = {n};
	std::array<int, 1> out;
	out = std::find_first_of(t, to_find);
	return (out[0]); 
}

#endif
