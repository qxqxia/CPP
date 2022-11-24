/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 14:37:56 by qxia              #+#    #+#             */
/*   Updated: 2022/11/24 15:20:37 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void) : _size(0){}

Span::Span(unsigned int N) : _size(N) {}

Span::Span(Span const &src) : _size(src.getSize()), _myvector(src.getArray()){}

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

void Span::addNumber(int nbr){
    if (this->_myvector.size() == getSize())
        throw std::exception();
    _myvector.push_back(nbr);
}

void Span::addMoreNumber(unsigned int n){
    srand(time(NULL));
    while(n){
        addNumber(std::rand()%RAND_MAX);
        n--;
    }
}

void Span::printArray(void)const{
    for(unsigned int i = 0; i < _myvector.size(); i++)
        std::cout << _myvector[i] << std::endl;
}

int Span::shortestSpan(void)const{
	std::vector<int> tmp = _myvector;
	std::sort(tmp.begin(), tmp.end());
	int dlta = tmp[1] - tmp[0]; 
	for(unsigned int i = 2; i < tmp.size(); i++){
		if (dlta > tmp[i] - tmp[i - 1])
			 dlta = tmp[i] - tmp[i - 1];
	}
	return (dlta);
}

int Span::longestSpan(void)const{
    std::vector<int> tmp = _myvector;
    std::sort(tmp.begin(), tmp.end());
    return (*(tmp.end() - 1) - *tmp.begin());
}
