/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 10:58:19 by omoreno-          #+#    #+#             */
/*   Updated: 2023/10/06 16:43:25 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _EASYFIND_TPP_
# define _EASYFIND_TPP_
# include <vector>
# include <algorithm>

template <typename Container>
const int& easyfind(const Container& ctnr, int n)
{
	Container to_find;
	to_find.insert(n);
	auto out = std::find_first_of(ctnr.begin(), ctnr.end(), to_find.begin(), to_find.end());
	return (out[0]);
}

#endif
