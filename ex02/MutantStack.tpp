/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 11:54:13 by omoreno-          #+#    #+#             */
/*   Updated: 2023/10/09 13:57:48 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <MutantStack.hpp>

template < typename T >
MutantStack<T>::MutantStack() : std::stack<T>(dq)
{
	;
}

template < typename T >
MutantStack<T>::~MutantStack()
{
	;
}

template < typename T >
MutantStack<T>::MutantStack(const MutantStack<T>& b)
{
	this->dq = b.dq;
}

template < typename T >
MutantStack<T>& MutantStack<T>::operator=(const MutantStack<T>& b)
{
	this->dq = b.dq;
	return (*this);
}

template < typename T >
void		MutantStack<T>::push(T el)
{
	this->stack::push(el);
}

template < typename T >
void		MutantStack<T>::pop(void)
{
	this->stack::pop();
}
template < typename T >
bool		MutantStack<T>::empty() const
{
	return (this->stack::empty());
}

template < typename T >
size_t	MutantStack<T>::size() const
{
	return (this->stack::size());
}

template < typename T >
T&	MutantStack<T>::top()
{
	return (this->stack::top());
}

template < typename T >
typename MutantStack<T>::iterator	MutantStack<T>::begin()
{
	return (this->dq.begin());
}

template < typename T >
typename MutantStack<T>::iterator	MutantStack<T>::end()
{
	return (this->dq.end());
}
