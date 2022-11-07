/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 15:54:36 by qxia              #+#    #+#             */
/*   Updated: 2022/11/07 14:40:54 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(){
    try{
        Bureaucrat a("qxia", 150);
        a.increGrade();
    }catch (std::exception& e){
        std::cout << e.what();
    }
    std::cout << std::endl;
    try{
        Bureaucrat b("hello", 150);
        b.decreGrade();
    }catch (std::exception& e){
        std::cout << e.what();
    }
    std::cout << std::endl;
    try{
        Bureaucrat c("tom", 1);
        c.increGrade();
    }catch (std::exception& e){
        std::cout << e.what();
    }
    std::cout << std::endl;
    try{
        Bureaucrat d("tom", 1);
        d.decreGrade();
    }catch (std::exception& e){
        std::cout << e.what();
    }
    std::cout << std::endl;
    try{
        Bureaucrat f("qxia", 155);
    }catch (std::exception& e){
        std::cout << e.what();
    }
    return 0;
}