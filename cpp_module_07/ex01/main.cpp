/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 12:31:16 by xuwang            #+#    #+#             */
/*   Updated: 2022/11/17 17:47:52 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main() {
    std::cout << "---print str---" << std::endl;
    std::string str[] = {std::string("hello world"), std::string("goodbye")};
    iter(str, 2, ft_element);
    
    std::cout << "---print caractere---" << std::endl;
    char c[] = {'a', 'b', 'c'};
    iter(c, 3, f);

    std::cout << "---print int---" << std::endl;
    int i[] = {1, 2, 3, 4};
    iter(i, 4, ft_element);
    return 0;
}
