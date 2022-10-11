/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qinxia <qinxia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 22:31:13 by qinxia            #+#    #+#             */
/*   Updated: 2022/10/11 22:36:26 by qinxia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl Myharl;

    Myharl.complain("DEBUG");
    Myharl.complain("INFO");
    Myharl.complain("WARNING");
    Myharl.complain("ERROR");

    return (0);
}