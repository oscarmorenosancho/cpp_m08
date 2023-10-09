/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 11:54:23 by omoreno-          #+#    #+#             */
/*   Updated: 2023/10/09 13:57:29 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _MUTANTSTACK_HPP_
# define _MUTANTSTACK_HPP_
# include <iostream>
# include <stack>
# include <deque> 
# include <algorithm>

template <typename T> 
class MutantStack : protected std::stack<T>
{
private:
	std::deque<T> dq;
public:
	typedef typename std::deque<T>::iterator	iterator;
	MutantStack();
	~MutantStack();
	MutantStack(const MutantStack<T>& b);
	MutantStack& operator=(const MutantStack<T>& b);
	void		push(T);
	void		pop(void);
	bool		empty() const;
	size_t		size() const;
	T&			top();
	iterator	begin();
	iterator	end();
};

# include <MutantStack.tpp>

#endif