/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 10:58:19 by omoreno-          #+#    #+#             */
/*   Updated: 2023/10/07 18:36:29 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _EASYFIND_TPP_
# define _EASYFIND_TPP_
# include <vector>
# include <algorithm>
# include <exception>

template <typename Container>
int easyfind(const Container& ctnr, int n)
{
	const int it = std::find(ctnr.begin(), ctnr.end(), n)[0];
  	if (it != *ctnr.end())
		return (it);
  	else
    	throw std::runtime_error("Exception: Element Not Found in Container");	
}

#endif
