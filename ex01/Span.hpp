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
# include <exception>

class Span
{
private:
	unsigned int			stored;
	std::vector<int>		*arr;
	std::overflow_error		overflow;
	std::runtime_error		tooFewElements;
public:
	Span(unsigned int	N);
	~Span();
	void	addNumber(int n);
	void	addRangeOfNumbers(std::vector<int> range);
	int		shortestSpan();
	int 	longestSpan();
	void 	printSpan();
	void 	sortSpan();
};

#endif
