/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 10:53:53 by omoreno-          #+#    #+#             */
/*   Updated: 2023/10/07 18:39:42 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <easyfind.hpp>
#include <iostream>

int main(int argc, char const **argv)
{
	int to_locate;

	if (argc != 2)
	{
		std::cerr << "Error:" << std::endl;
		std::cerr << "Usage: " << argv[0] << " number_to_locate"<< std::endl;
		return (1);
	}
	try
	{
		to_locate = std::stoi(argv[1]);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return (1);
	}
	
	std::vector<int> test;
	for (int i = 0; i < 10; i++)
		test.push_back(i * 10);
	try
	{
		int number = easyfind(test, to_locate);
		std::cout << number << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}
