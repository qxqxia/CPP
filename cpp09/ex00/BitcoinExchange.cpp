# include "BitcoinExchange.hpp"

std::string remove_whitesp(std::string & line)
{
    std::string res;
    int i = -1;

    while(++i < (int)line.length())
    {
        if (!(line[i] == ' ' || (line[i] < 14 && line[i] > 8)))
            res += line[i];
    }
    return (res);
}