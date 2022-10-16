/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qxia <qxia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 15:21:45 by qxia              #+#    #+#             */
/*   Updated: 2022/10/16 14:55:08 by qxia             ###   ########.fr       */
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
    
    std::ifstream ifs;
    ifs.open(filename.c_str());//open filename by reading
    if (!ifs){
        std::cout << "open [" << filename << "] failed !" << std::endl;
        return (1);
    }
    std::ofstream ofs;
    ofs.open(replacefile.c_str());//open replacefile by writing 
    if (!ofs){
        std::cout << "open [" << replacefile << "] failed !" << std::endl;
        return (1);
    }
    
    //std::string::find
    std::string strings;
    std::size_t found;
    while(1){
        std::getline(ifs, strings);
        while(1){
            found = strings.find(s1); //find s1
            if (found != std::string::npos){//if no matches were found, the function returns string::npos.
                strings.erase(found, s1.size());//delete s1
                strings.insert(found, s2); //add s2
            } 
            else{
                ofs << strings; //write strings in the filename to replacefile
                break;
            }
        }
        if (ifs.eof())
            break;
        else
            ofs << std::endl;
    }
    ifs.close();
    ofs.close();
    return (0);    
}

