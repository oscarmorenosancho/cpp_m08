/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 11:54:13 by omoreno-          #+#    #+#             */
/*   Updated: 2023/10/09 14:26:00 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <MutantStack.hpp>

template < typename T >
MutantStack<T>::MutantStack()
{
	;
}

template < typename T >
MutantStack<T>::~MutantStack()
{
	;
}

template < typename T >
MutantStack<T>::MutantStack(const MutantStack<T>& b) : std::stack<T>(b)
{
}

template < typename T >
MutantStack<T>& MutantStack<T>::operator=(const MutantStack<T>& b)
{
	this->std::stack<T>::operator=(b);
	return (*this);
}

template < typename T >
typename MutantStack<T>::iterator	MutantStack<T>::begin()
{
	return (this->c.begin());
}

template < typename T >
typename MutantStack<T>::iterator	MutantStack<T>::end()
{
	return (this->c.end());
}
