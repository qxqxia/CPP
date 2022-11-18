/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 14:03:37 by qxia              #+#    #+#             */
/*   Updated: 2022/11/18 16:49:03 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template<typename T>
Array<T>::Array(void) : _array(new T[0]), _size(0){}

template<typename T>
Array<T>::Array(unsigned int const &n) : _array(new T[n]), _size(n){}

template<typename T>
Array<T>::Array(Array const &src){
    this->_array = new T(src.size());
    this->_size = src.size();
    for (unsigned int i = 0; i < src.size(); i++){
        this->_array[i] = src._array[i];
    }
    *this = src;
}

template<typename T>
Array<T>::~Array(void){
    delete [] _array;
}

template<typename T>
Array& Array<T>::operator=(Array const &rhs){
    if(this == &rhs)
        return (*this);
    this->_array = new T(rhs.size());
    this->_size = src.size();
    for (unsigned int i = 0; i < rhs.size(); i++){
        this->_array[i] = rhs._array[i];
    }
    return (*this);
}

template<typename T>
T& Array<T>::operator[](unsigned int index){

}

template<typename T>
unsigned int Array<T>::size(void)const{
    return (this->_size);
}