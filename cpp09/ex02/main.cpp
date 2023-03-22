# include <iostream>
#include "PmergeMe.hpp"

int main(int ac, char **av)
{
    std::vector<int>    v;
    std::deque<int>     d;
    struct timeval  tv_start, tv_end;

    int i= 0;
    int n;
    int tmp;
    int start, end, diff_1, diff_2, diff_3, diff_4;

    if (ac < 2)
    {
        std::cout << "No given number, exit.\n";
        return 0;
    }

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