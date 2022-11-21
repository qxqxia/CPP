/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 14:03:37 by qxia              #+#    #+#             */
/*   Updated: 2022/11/21 14:25:05 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template<typename T>
Array<T>::Array(void) : _size(0), _array(new T[0]){}

template<typename T>
Array<T>::Array(unsigned int const &n) : _size(n), _array(new T[n]){
    
}

template<typename T>
Array<T>::Array(Array const &src){
    this->_array = new T[src.size()];
    this->_size = src.size();
    for (unsigned int i = 0; i < src.size(); i++){
        this->_array[i] = src._array[i];
    }
}

template<typename T>
Array<T>::~Array(void){
    if (this->_array)
        delete [] this->_array;
}

template<typename T>
Array<T>& Array<T>::operator=(Array const &rhs){
    if(this == &rhs)
        return (*this);
    if (this->_array)
        delete [] this->_array;
    this->_array = new T[rhs.size()];
    this->_size = rhs.size();
    for (unsigned int i = 0; i < rhs.size(); i++){
        this->_array[i] = rhs._array[i];
    }
    return (*this);
}

template<typename T>
T& Array<T>::operator[](unsigned int index){
    if (index >= this->_size)
        throw std::exception();
    return (this->_array[index]);
}

template<typename T>
unsigned int Array<T>::size(void)const{
    return (this->_size);
}
