/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 22:31:13 by qinxia            #+#    #+#             */
/*   Updated: 2022/10/16 14:56:07 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(){
    Harl Myharl;

    Myharl.complain("DEBUG");
    Myharl.complain("INFO");
    Myharl.complain("WARNING");
    Myharl.complain("ERROR");

    return (0);
}