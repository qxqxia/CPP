#include <iostream>
#include <stack>
#include <cstdlib>

# include "RPN.hpp"

int CalculateRPN(std::string tokens)
{
    std::stack<int> tmp;

    if (tokens == "Error\n")
    {
        std::cout << tokens ;
        exit(1);
    }
    for (size_t i = 0; i < tokens.size(); i++)
    {
        if (tokens[i] >= '0' && tokens[i] <= '9')
            tmp.push(tokens[i] - '0');
        else if(tokens[i] == '+' ||tokens[i] == '-' || tokens[i] == '*' || tokens[i] == '/')
        {
            if (tmp.size() < 2)
            {
                std::cout << YELLOW "Error\n" RESET;
                exit(1);
            }
            int b = tmp.top();
            tmp.pop();
            int a = tmp.top();
            tmp.pop();
            int res;
            if (tokens[i] == '+')
                res = a + b;
            else if (tokens[i] == '-')
                res = a - b;
            else if (tokens[i] == '*')
                res = a * b;
            else if (tokens[i] == '/')
            {
                if (!b)
                {
                    std::cout << YELLOW "Error\n" RESET;
                    exit(1);
                }
                res = a / b;
            }
                
            tmp.push(res);
        }
    }
    if (tmp.empty())
    {
        std::cout << YELLOW "Error\n" RESET;
        exit(1);
    }
    return tmp.top();
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        int res = CalculateRPN(std::string(av[1]));
        std::cout << GREEN << res << "\n";
    }
}
