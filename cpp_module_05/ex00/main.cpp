/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 15:54:36 by qxia              #+#    #+#             */
/*   Updated: 2022/11/08 10:29:34 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat a("qxia", 150);
    std::cout << a << std::endl;
    try{
        a.decreGrade();
    }catch (std::exception &e){
        std::cout << e.what();
    }
    std::cout << a << std::endl;
    Bureaucrat b("tom", 1);
    try{
        b.increGrade();
    }catch (std::exception &e){
        std::cout << e.what();
    }
    std::cout << b << std::endl;
    try{
        Bureaucrat c("qxia", -1); //在32位或者64位机器上，-1对应的无符号数是4 294 967 295，即32位的无符号数的最大值（UMax）
    }catch (std::exception &e){
        std::cout << e.what();
    }
    std::cout << std::endl;
    Bureaucrat *pb = new Bureaucrat("qxia", 100);
    std::cout << *pb;
    try{
        pb->decreGrade();
    }catch (std::exception &e){
        std::cout << e.what();
    }
    delete pb;
    std::cout << std::endl;
    Bureaucrat H("123", 10);
    Bureaucrat G(H); //copy constructor
    std::cout << H;
    std::cout << G;
    try{
        G.decreGrade();
    }catch (std::exception &e){
        std::cout << e.what();
    }
    std::cout << std::endl;
    Bureaucrat h("123", 10);
    Bureaucrat g;
    g = h; //operator=
    std::cout << h;
    std::cout << g;
    try{
        g.decreGrade();
    }catch (std::exception &e){
        std::cout << e.what();
    }
    return 0;
}