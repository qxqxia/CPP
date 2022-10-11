/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 15:21:45 by qxia              #+#    #+#             */
/*   Updated: 2022/10/11 11:33:03 by qxia             ###   ########.fr       */
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
    std::string replacefile = filename + ".replace";
    std::string s1 = av[2]; 
    std::string s2 = av[3]; 
    
    std::ifstream infile;//open filename by reading
    infile.open(filename) 
    if (!filename){
        std::cout << "open [" << filename << "] failed !" << std::endl;
        return (1);
    }
    std::ofstream outfile;//open replacefile by writing
    outfile.open(replacefile) 
    if (!replacefile){
        std::cout << "open [" << replacefile << "] failed !" << std::endl;
        return (1);
    }
    
    //std::string::find
    std::string cottents;
    std::size_t pos;
    while(1){
        
    }
    return (0);    
}

