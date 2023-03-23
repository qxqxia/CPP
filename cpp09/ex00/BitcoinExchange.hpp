#ifndef _BITCOINEXCHANGE_HPP_
# define _BITCOINEXCHANGE_HPP_

# include <iostream>
# include <map>
# include <fstream> //ifstream and ofstream
# include <math.h>  
# include <sstream>

# define YELLOW "\033[0;33m"
# define GREEN "\033[0;32m"
# define RESET "\033[0;0m"

# define PRECISION 10 

std::string remove_whitesp(std::string & line);
template<typename T>
std::string to_string(const T value);
std::string to_string(double const value);

#endif