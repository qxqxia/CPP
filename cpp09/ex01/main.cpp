#include <iostream>
#include <stack>
#include <cstdlib>
#include "RPN.hpp"

int main(int ac, char **av)
{
    if (ac == 2)
    {
        int res = CalculateRPN(std::string(av[1]));
        std::cout << GREEN << res << "\n";
    }
}
