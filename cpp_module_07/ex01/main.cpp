/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 12:31:16 by xuwang            #+#    #+#             */
/*   Updated: 2022/11/22 10:38:47 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void)
{
    int array[] = {1, 4, 6, 7};
    iter(array, 4, ft_var);
    std::cout << "\n";
    std::string array1[3] = {"zxcvb", "asdfghjk", "qwertyuiop"};
    iter(array1, 3, ft_var);
    std::cout << "\n";
    char array2[] = {'a', 'b', 'c', 'd', 'e'};
    iter(array2, 5, ft_var);
    std::cout << "\n";
    float array3[] = {21.1f, 42.2f, 11.3f};
    iter(array3, 3, ft_var);
    std::cout << "\n";
    double array4[] = {21.001, 42.002, 11.003};
    iter(array4, 3, ft_var);
}
