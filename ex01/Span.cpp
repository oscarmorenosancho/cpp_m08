/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 18:45:02 by omoreno-          #+#    #+#             */
/*   Updated: 2023/10/07 19:24:17 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Span.hpp>

Span::Span(unsigned int	N)
{
	size = N;
	arr = new std::vector<int>(size);
}

Span::~Span()
{
	delete arr;
}

void	Span::addNumber(int n)
{
	if (arr)
		arr->push_back(n);
}

int		Span::shortestSpan()
{
	return (0);
}

int 	Span::longestSpan()
{
	return (0);
}
