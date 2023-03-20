#include <iostream>
#include <stack>
#include <vector>
#include <sstream> //stringstream
using namespace std;

vector<string> SplitStr(string str)
{
    vector<string> v;
    stringstream ss(str);
    string s;

    while (ss >> s)
        v.push_back(s);
    return v;
}

int CalculateRPN(vector<string> tokens)
{
    if (tokens.empty())
        return 0;

    stack<int> tmp;
    for (size_t i = 0; i < tokens.size(); i++)
    {
        if (tokens[i].size() > 1 || (tokens[i].size() == 1 && tokens[i] >= "0" && tokens[i] <= "9"))
            tmp.push(atoi(tokens[i].c_str()));
        else
        {
            int b = tmp.top();
            tmp.pop();
            int a = tmp.top();
            tmp.pop();
            int res;
            if (tokens[i] == "+")
                res = a + b;
            else if (tokens[i] == "-")
                res = a - b;
            else if (tokens[i] == "*")
                res = a * b;
            else if (tokens[i] == "/")
                res = a / b;
            tmp.push(res);
        }
    }
    return tmp.top();
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        int res = CalculateRPN(SplitStr(av[1]));
        cout << res << "\n";
        return 0;
    }
}
