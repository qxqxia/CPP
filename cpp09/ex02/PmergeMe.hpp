#ifndef _PMERGEME_HPP_
# define _PMERGEME_HPP_

# include <iostream>
# include <vector>
# include <deque>
# include <sstream>

# define BEFORE 0
# define AFTER 1
# define YELLOW "\033[0;33m"
# define GREEN "\033[0;32m"
# define RESET "\033[0;0m"

void mergeSort(std::vector<long long>& v);
void mergeSort(std::deque<long long>& d);
bool isNumeric(std::string s);
void printVector(std::vector<long long> v, bool option);
void printDeque(std::deque<long long> d, bool option);

# endif