/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 16:09:18 by xuwang            #+#    #+#             */
/*   Updated: 2022/11/09 11:43:11 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
    Bureaucrat  b1("b1", 1);
    std::cout << b1 << std::endl;
    
    Bureaucrat  b2("b2", 50);
    std::cout << b2 << std::endl;

    Form f1("f1", 60, 60);
    std::cout << f1 << std::endl;

    Form f2("f2", 40, 40);
    std::cout << f2 <<std::endl;

    b1.signForm(f1);
    b1.signForm(f2);
    b2.signForm(f1);
    b2.signForm(f2);

    std::cout << std::endl;
    f2 = f1;  //operator=
    b2.signForm(f2);
    std::cout << std::endl;
    Form f3(f1); //copy constructor
    b2.signForm(f3);
    std::cout << std::endl;
    try{
           Bureaucrat B1("B1", 80);
           std::cout << B1 << std::endl;

           Form F1("F1", 50, 50);
           B1.signForm(F1); 
    }catch (std::exception &e) {
       std::cout << e.what() << std::endl;
    }
    try{
        std::cout << std::endl;
        Form F2("F2", -1, -1);
    }catch(const std::exception &e){
        std::cout << e.what() << std::endl;
    }
    return 0;
}