# include <iostream>
# include "PmergeMe.hpp"
# include "sys/time.h"
int main(int ac, char **av)
{
    std::vector<long long>    v;
    std::deque<long long>     d;
    struct timeval  tv_start, tv_end;

    int                 i;
    long long           n;
    unsigned long long  tmp;
    long long           start, end, diff_1, diff_2;

    if (ac < 2)
    {
        std::cout << "Error: no given number, exit.\n";
        return (1);
    }

    if (gettimeofday(&tv_start, NULL)) //gettimeofday error
        return (1);
    
    i = 0;
    while(++i < ac)
    {
        if(!isNumeric(av[i]))
        {
            std::cout << "Error: non numeric value exist. exit now.\n";
            return (1);
        }
        std::stringstream(av[i]) >> tmp;
        if (tmp > 9223372036854775807)
        {
            std::cout << "Error: too big integer. exit now.\n";
            return (1);
        }
        if (!tmp)
        {
            std::cout << "Error: zero is not a positive integer. exit now.\n";
            return (1);
        }
        n = (long long)tmp;
        v.push_back(n);
        d.push_back(n);
    }
    if (gettimeofday(&tv_end, NULL))
        return (1);

    start = tv_start.tv_usec; // time spent on data mgmt
	end = tv_end.tv_usec;
	diff_1 = end - start;
	diff_2 = diff_1;

    printVector(v, BEFORE);
    if (gettimeofday(&tv_start, NULL)) //gettimeofday error
        return (1);
    mergeSort(v);
    if (gettimeofday(&tv_end, NULL))
        return (1);
    printVector(v, AFTER);
    
    start = tv_start.tv_usec;
	end = tv_end.tv_usec;
	diff_1 += end - start;

    printDeque(d, BEFORE);
    if (gettimeofday(&tv_start, NULL)) //gettimeofday error
        return (1);
    mergeSort(d);
    if (gettimeofday(&tv_end, NULL))
        return (1);
    start = tv_start.tv_usec;
	end = tv_end.tv_usec;
	diff_2 += end - start;
    printDeque(d, AFTER); 

    std::cout
	<< "Time to process a range of " << v.size() << "\t" RESET
	<< " elements with std::vector :\t"  << diff_1 <<  " us\n";

	std::cout
	<< "Time to process a range of " << d.size() << "\t" RESET
	<< " elements with std::deque :\t"  << diff_2 <<  " us\n";
}