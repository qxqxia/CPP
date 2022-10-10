/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 15:21:45 by qxia              #+#    #+#             */
/*   Updated: 2022/10/10 16:44:29 by qxia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream> //open et close
#include <string>

int main(int ac, char **av){
    if (ac != 4){
        std::cout << "Please try again: ./REPLACE [filename] [s1] [s2]" << std::endl;
        return (1);
    } 
    std::string filename = av[1];
    std::fstream fs;
    fs.open (av[1], std::fstream::in);
    if (fs.is_open()){
        std::string s1 = av[2]; //s1 not define
        std::string s2 = av[3]; //s2 not define
    }
    
    
    
    fs.close();
    return 0;
    
}

