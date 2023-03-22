#include <iostream>
#include <stack>
#include <cstdlib>

# include "RPN.hpp"

int CalculateRPN(std::string tokens)
{
    std::stack<int> st;

    // if (tokens == "Error\n")
    // {
    //     std::cout << tokens ;
    //     exit(1);
    // }
    for (size_t i = 0; i < tokens.size(); i++)
    {
        if (tokens[i] >= '0' && tokens[i] <= '9')
            st.push(tokens[i] - '0');
        else if(tokens[i] == '+' ||tokens[i] == '-' || tokens[i] == '*' || tokens[i] == '/')
        {
            if (st.size() < 2)
            {
                std::cout << YELLOW "Error\n" RESET;
                exit(1);
            }
            int b = st.top();
            st.pop();
            int a = st.top();
            st.pop();
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
                
            st.push(res);
        }
    }
    if (st.empty())
    {
        std::cout << YELLOW "Error\n" RESET;
        exit(1);
    }
    return st.top();
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        int res = CalculateRPN(std::string(av[1]));
        std::cout << GREEN << res << "\n";
    }
}
