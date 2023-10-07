/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpaSpan.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 18:43:10 by omoreno-          #+#    #+#             */
/*   Updated: 2023/10/07 18:45:22 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SPAN_HPP_
# define _SPAN_HPP_
# include <algorithm>
# include <vector>

class Span
{
private:
	unsigned int			size;
	std::vector<int>		*arr;
public:
	Span(unsigned int	N);
	~Span();
	void	addNumber(int n);
	int		shortestSpan();
	int 	longestSpan();
};


#endif