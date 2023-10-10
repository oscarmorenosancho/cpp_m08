/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 18:45:02 by omoreno-          #+#    #+#             */
/*   Updated: 2023/10/10 13:22:14 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Span.hpp>
#include <iostream>
#define EOVF "Exception: overflow, container don't allow to add more elements"
#define ETFE "Exception: less than two elements"


Span::Span(unsigned int	N) : overflow(EOVF), tooFewElements(ETFE)
{
	stored = 0;
	arr = new std::vector<int>(N);
}

Span::~Span()
{
	delete arr;
}

void	Span::addNumber(int n)
{
	if (!arr || stored >= arr->size())
		throw overflow;
	std::vector<int>::iterator it = arr->begin();
	it[stored] = n;
	stored++;
}

void	Span::addRangeOfNumbers(std::vector<int> range)
{
	std::vector<int>::iterator it = range.begin();
	std::vector<int>::iterator ite = range.end();
	if (!arr || (stored + range.size() > arr->size()))
		throw overflow;
	while (it != ite)
	{
		addNumber(*it);
		it++;
	}
}

int		Span::shortestSpan()
{
	if (!arr || arr->size() < 2 || stored < 2)
		throw tooFewElements;
	int shortest;
	int prev;
	sortSpan();
	std::vector<int>::iterator it = arr->begin();
	std::vector<int>::iterator ite = arr->end();
	prev = *it;
	it++;
	shortest = *it - prev;
	prev = *it;
	it++;
	while (it != ite)
	{
		int tmp = *it - prev;
		if (tmp < shortest)
			shortest = tmp;
		prev = *it;
		it++;
	}
	return (shortest);
}

int 	Span::longestSpan()
{
	if (!arr || arr->size() < 2 || stored < 2)
		throw tooFewElements;
	sortSpan();
	std::vector<int>::iterator it = arr->begin();
	int min_value = it[0];
	int max_value = it[arr->size() - 1];
	return (max_value - min_value);
}

void 	Span::printSpan()
{
	if (arr)
	{
		std::vector<int>::iterator it = arr->begin();
		std::vector<int>::iterator ite = arr->end();
		while (it != ite)
		{
			std::cout << "*it: " << (*it) << std::endl;
			it++;
		}		
	}
}

void	Span::sortSpan()
{
	if (arr)
		std::sort(arr->begin(), arr->end());
}
