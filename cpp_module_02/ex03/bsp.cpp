/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 15:03:24 by qxia              #+#    #+#             */
/*   Updated: 2022/10/19 16:10:50 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.cpp"

//若点O在三角形内部，则沿着三角形的边逆时针走，点O一定保持在边的左侧。如图示，点在逆时针行走时，在AB，BC，CA的左侧。
//向量叉乘来判断O是否在向量AB的哪一侧。通过计算向量AO与向量AB的叉乘的值为正，则表示O在AB的左侧，反之为右侧。

float product(Point p1, Point p2, Point p3){
    //les vecteurs de p1p2 et p1p3，puis calculez le produit de fourchette
    //les vecteurs de p1p2 (p2.x-p1.x,p2.y-p1.y)
    //les vecteurs de p1p3 (p3.x-p1.x,p3.y-p1.y)
    return ((p2.getX().toFloat()-p1.getX().toFloat())*(p3.getY().toFloat()-p1.getY().toFloat()) - (p2.getY().toFloat()-p1.getY().toFloat())*(p3.getX().toFloat()-p1.getX().toFloat()));
}


bool bsp( Point const a, Point const b, Point const c, Point const point){
    if (product(a, b, c) < 0)
        return bsp(a, c, b, point);
    if (product(a, b, point) > 0 && product(b, c, point) > 0 && product(c, a, point) > 0)
        return (true);
    return (false);
}