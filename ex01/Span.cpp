/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 18:45:02 by omoreno-          #+#    #+#             */
/*   Updated: 2023/10/09 14:55:46 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Span.hpp>
#include <iostream>

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
	if (size < 2)
		throw;
	int shortest;
	if (arr)
	{
		int prev;
		std::sort(arr->begin(), arr->end());
		std::vector<int>::iterator it = arr->begin();
		std::vector<int>::iterator ite = arr->end();
		prev = *it;
		it++;
		shortest = *it - prev;
		it++;
		while (it != ite)
		{
			int tmp = *it - prev;
			std::cout << "shortest tmp: " << tmp << " *it: " << (*it) << " prev: " << prev << std::endl;
			if (tmp < shortest)
				shortest = tmp;
			it++;
			prev = *it;
		}
		return (shortest);
	}
	return (0);
}

int 	Span::longestSpan()
{
	if (size < 2)
		throw;
	int longest;
	if (arr)
	{
		int prev;
		std::sort(arr->begin(), arr->end());
		std::vector<int>::iterator it = arr->begin();
		std::vector<int>::iterator ite = arr->end();
		prev = *it;
		it++;
		longest = *it - prev;
		it++;
		while (it != ite)
		{
			int tmp = *it - prev;
			std::cout << "longest tmp: " << tmp << " *it: " << (*it) << " prev: " << prev << std::endl;
			if (tmp > longest)
				longest = tmp;
			prev = *it;
			it++;
		}
		return (longest);
	}
	return (0);
}
