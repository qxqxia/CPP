/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qinxia <qinxia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 14:37:56 by qxia              #+#    #+#             */
/*   Updated: 2022/11/24 08:58:10 by qinxia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void) : _size(0) {}

Span::Span(unsigned int N) : _size(N) {}

Span::Span(Span const &src) : _size(src.getSize(), _myvector(src.getArray()){}

Span::~Span(void){}

Span& Span::operator=(Span const &rhs){
    if (this == &rhs)
        return (*this);
    this->_size = rhs.getSize();
    this->_myvector = rhs.getArray();
    return (*this);
}

unsigned int Span::getSize(void) const{
    return (this->_size);
}
    
std::vector<int> const &Span::getArray(void) const{
    return (this->_myvector);
}

void Span::addNumber(int n){
    if ()

        _myvector.push_back(n);
}

void Span::printArray(void)const{

}

unsigned int Span::shortestSpan(void){
    
}

unsigned int Span::longestSpan(void){
    
}
