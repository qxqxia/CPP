/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 14:11:47 by qxia              #+#    #+#             */
/*   Updated: 2022/11/22 10:37:57 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main( void ) {
    std::cout << "~~~Tests in the subject~~~\n";
    int a = 2;
    int b = 3;
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    std::cout << "~~~My tests~~~\n";
    char c1 = '.';
    char c2 = '!';
    ::swap( c1, c2 );
    std::cout << "c1 = " << c1 << ", c2 = " << c2 << std::endl;
    std::cout << "min( c1, c2 ) = " << ::min( c1, c2 ) << std::endl;
    std::cout << "max( c1, c2 ) = " << ::max( c1, c2 ) << std::endl;
    float f1 = 42.12345f;
    float f2 = 40.123f;   
    ::swap( f1, f2 );
    std::cout << "f1 = " << f1 << ", f2 = " << f2 << std::endl;
    std::cout << "min( f1, f2 ) = " << ::min( f1, f2 ) << std::endl;
    std::cout << "max( f1, f2 ) = " << ::max( f1, f2 ) << std::endl;
       
    return 0;
}
