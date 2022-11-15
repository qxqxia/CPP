/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qinxia <qinxia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 20:26:37 by qinxia            #+#    #+#             */
/*   Updated: 2022/11/15 23:15:48 by qinxia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int main(int ac, char **av)
{
    if (ac != 2 || !av[1])
    {
        std::cout << "Please follow the right format: ./convert av[1]\n";
        return (1);
    }
    Convert convert(av[1]);
    convert.printResult();
    return (0);
}