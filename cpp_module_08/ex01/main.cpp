/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 20:23:48 by xuwang            #+#    #+#             */
/*   Updated: 2022/11/25 11:44:46 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(){
    std::cout << "~~~test in the subject~~~\n";
    Span sp = Span(5);
    sp.addNumber(5);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    sp.printArray();
    std::cout << std::endl;
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    std::cout << "~~~test add more number~~~\n";
    Span sp1 = Span(5);
    sp1.addNumber(-1);
    sp1.addNumber(5);
    sp1.addNumber(3);
    sp1.addNumber(17);
    sp1.addNumber(9);
    try{
        sp1.addNumber(11);
        sp1.printArray();
    }catch (const std::exception &e){
        std::cerr << e.what() << std::endl;
    }
    sp1.printArray();
    std::cout << "shortestSpan: " << std::endl;
    try{
        std::cout << sp1.shortestSpan() << std::endl;
    }catch (const std::exception &e){
        std::cerr << e.what() << std::endl;
    }
    std::cout << "longestSpan: " << std::endl;
    try{
        std::cout << sp1.longestSpan() << std::endl;
    }catch (const std::exception &e){
        std::cerr << e.what() << std::endl;
    }

    std::cout << "~~~test error span~~~\n";
    Span sp2 = Span(5);
    sp2.addNumber(-1);//add one nbr
    sp2.printArray();
    try{
        std::cout << sp2.shortestSpan() << std::endl;
    }catch (const std::exception &e){
        std::cerr << e.what() << std::endl;
    }
    try{
        std::cout << sp2.longestSpan() << std::endl;
    }catch (const std::exception &e){
        std::cerr << e.what() << std::endl;
    }

    std::cout << "~~test more than 10000 number~~~" << std::endl;
    Span sp3 = Span(20000);
    sp3.addMoreNumber(20000);
    try{
        std::cout << sp3.shortestSpan() << std::endl;
    }catch (const std::exception &e){
        std::cerr << e.what() << std::endl;
    }
    try{
        std::cout << sp3.longestSpan() << std::endl;
    }catch (const std::exception &e){
        std::cerr << e.what() << std::endl;
    }                 
    return 0; 
}
