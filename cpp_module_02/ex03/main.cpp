/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 15:03:39 by qxia              #+#    #+#             */
/*   Updated: 2022/10/20 13:44:13 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

int main(){
    Point const p1(10, 0);
    Point const p2(30, 0);
    Point const p3(15, 15);
    Point const o(12, 1);
    std::cout << "p1 " << "(" << p1.getX().toFloat() << "," << p1.getY().toFloat() << ")\n";
    std::cout << "p2 " << "(" << p2.getX().toFloat() << "," << p2.getY().toFloat() << ")\n";
    std::cout << "p3 " << "(" << p3.getX().toFloat() << "," << p3.getY().toFloat() << ")\n";
    std::cout << "0 " << "(" << o.getX().toFloat() << "," << o.getY().toFloat() << ")\n";
    bool flag = bsp(p1,p2,p3,o);
    if(flag) 
        std::cout << "Yes\n";
    else 
        std::cout << "No\n";

}