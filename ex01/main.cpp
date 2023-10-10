/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 10:53:53 by omoreno-          #+#    #+#             */
/*   Updated: 2023/10/10 14:06:41 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Span.hpp>
#include <iostream>
#include <vector>
#include <cstdlib>
#include <chrono>
#include <ctime>
#define RANGE_SIZE 10000
#define RANGE_SPREAD 20000

void add_args(Span &sp, int argc, char **argv)
{
	for (int i = 1; i < argc; i++)
	{
		try
		{
			int num = std::stoi(argv[i]);
			sp.addNumber(num);
		}
		catch(const std::exception& e)
		{
			;
		}
	}
}

std::vector<int>* init_random_range(int size, int spread)
{
	std::chrono::system_clock::time_point 	cur;
 	static long								*seed;
	cur = std::chrono::system_clock::now();
	seed = (long *)((char *)&cur + 
			sizeof(std::chrono::system_clock::time_point) - sizeof(long));
	srand(*seed);
	int range_ext = size * spread;
	int range_offset = range_ext / 2;
	std::vector<int>* res = new std::vector<int>(0);
	if (!res)
		return (res);
	for (int i = 0; i < size; i++)
		res->push_back((rand() % range_ext) - range_offset);
	return res;
}

int main(int argc, char **argv)
{
	std::vector<int>* range = init_random_range(RANGE_SIZE, RANGE_SPREAD);
	Span sp = Span(RANGE_SIZE + 5 + argc - 1);
	add_args(sp, argc, argv);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	if (range)
	{
		sp.addRangeOfNumbers(*range);
		delete range;
	}
	// sp.sortSpan();
	// sp.printSpan();
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	return 0; 
}
