/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 10:58:19 by omoreno-          #+#    #+#             */
/*   Updated: 2023/10/07 15:32:18 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _EASYFIND_TPP_
# define _EASYFIND_TPP_
# include <vector>
# include <algorithm>

template <typename Container>
int easyfind(const Container& ctnr, int n)
{
	int it = std::find(ctnr.begin(), ctnr.end(), n)[0];
	return (it);
}

#endif
