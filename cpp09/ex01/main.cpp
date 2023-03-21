#include <iostream>
#include <stack>
#include <vector>
#include <sstream> //stringstream
#include <cstdlib>

// std::string SplitStr(std::string str)
// {
//     std::string s;

//     for (size_t i = 0; i < str.size(); i++)
//     {
//         if (str[i] == ' ')
//             continue ;
//         s +=str[i];
//         s +=' ';
//     }
//     if (s == " " || s == "")
//         return ("Error\n");
//     return (s);
// }

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
        // std::cout << tokens[i] << "\n";
        if (tokens[i] >= '0' && tokens[i] <= '9')
            tmp.push(tokens[i] - '0');
        else if(tokens[i] == '+' ||tokens[i] == '-' || tokens[i] == '*' || tokens[i] == '/')
        {
            if (tmp.size() < 2)
            {
                std::cout << "Error\n";
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
                res = a / b;
            tmp.push(res);
        }
    }
    if (tmp.empty())
    {
        std::cout << "Error\n";
        exit(1);
    }
    return tmp.top();
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        //std::string res = SplitStr(std::string(av[1]));
        // int res = CalculateRPN(SplitStr(av[1]));
        int res = CalculateRPN(std::string(av[1]));
        std::cout << res << "\n";
    }
}
