# include <iostream>
#include "PmergeMe.hpp"

int main(int ac, char **av)
{
    std::vector<int>    v;
    std::deque<int>     d;

    if (ac < 2)
    {
        
    }

    int i= 0;
    int n;
    int tmp;

    while(++i < ac)
    {
        std::stringstream(av[i]) >> tmp;
        n = tmp;
        v.push_back(n);
        d.push_back(n);
    }
    printVector(v, BEFORE);
    mergeSort(v);
    printVector(v, AFTER);
    
    printDeque(d, BEFORE);
    mergeSort(d);
    printDeque(d, AFTER); 
}