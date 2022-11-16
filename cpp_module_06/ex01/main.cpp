/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:36:32 by qxia              #+#    #+#             */
/*   Updated: 2022/11/16 16:33:06 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t serialize(Data* ptr){
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw){
    return (reinterpret_cast<Data*>(raw));
}

int main(){
    Data data1;
    Data* pointer = NULL;
    uintptr_t n = 0;
    
    data1.c = 'A';
    data1.i = 10;
    data1.f = 20.0f;
    data1.d = 30.1234;
    data1.s = "pointer et data";

    std::cout << "~~original data~~~\n";
    std::cout << data1.c << "\n";
    std::cout << data1.i << "\n";
    std::cout << data1.f << "\n";
    std::cout << data1.d << "\n";
    std::cout << data1.s << "\n";
    
    n = serialize(&data1);
    pointer = deserialize(n);

    std::cout << "~~~after serialize and deserialize~~~\n";
    std::cout << pointer->c << "\n";
    std::cout << pointer->i << "\n";
    std::cout << pointer->f << "\n";
    std::cout << pointer->d << "\n";
    std::cout << pointer->s << "\n";
}