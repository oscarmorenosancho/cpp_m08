/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 10:53:53 by omoreno-          #+#    #+#             */
/*   Updated: 2023/10/06 16:44:45 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <easyfind.hpp>
#include <iostream>

int main(int, char const **)
{
	std::vector<int> test;
	for (int i = 0; i < 10; i++)
		test[i] = i;
	int number = easyfind(test, 5);
	std::cout << number << std::endl;
	return 0;
}
