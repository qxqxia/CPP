/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qinxia <qinxia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 15:36:58 by qxia              #+#    #+#             */
/*   Updated: 2022/11/24 22:53:45 by qinxia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <deque>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
public:
	MutantStack(void) : std::stack<T, Container>(){};
	MutantStack(MutantStack const &src)
	{
		*this = src;
	}
	~MutantStack(void){};

	MutantStack &operator=(MutantStack const &rhs)
	{
		if (this == &rhs)
			return (*this);
		std::stack<T, Container>::operator=(rhs);
		return (*this);
	}
	// use iterator from deque to define mutantstack iterator
	typedef typename std::stack<T, Container>::container_type::iterator iterator;
	typedef typename std::stack<T, Container>::container_type::reverse_iterator reverse_iterator;

	iterator begin(void)
	{
		return (std::stack<T, Container>::c.begin());
	}
	iterator end(void)
	{
		return (std::stack<T, Container>::c.end());
	}
	reverse_iterator rbegin(void)
	{
		return (std::stack<T, Container>::c.rbegin());
	}
	reverse_iterator rend(void)
	{
		return (std::stack<T, Container>::c.rend());
	}
};

#endif
