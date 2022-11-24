/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 15:36:58 by qxia              #+#    #+#             */
/*   Updated: 2022/11/24 16:17:21 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

template <typename T>
class MutantStack : public std::stack<T>{
	public:
		MutantStack(void);
		MutantStack(MutantStack const &src);
		~MutantStack(void);

		MutantStack& operator=(MutantStack const &rhs);

		iterator 
		const_iterator
		reverse_iterator
		const_reverse_iterator
};

#endif
