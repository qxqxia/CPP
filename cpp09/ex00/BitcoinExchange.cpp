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

template<typename T>
std::string to_string(const T value)
{
    std::ostringstream  oss;
    oss << value;
    return oss.str();
}

std::string to_string(const double value)
{
    std::ostringstream  oss;
    oss << value;
    return oss.str();
}

double to_double_round_2(double f)
{

}

bool isNumeric(std::string & str)
{
    size_t  i = -1;

    while(++i < str.length())
    {
        if (str[i] < '0' || str[i] > '9')
            return (false);
    }
    return (true);
}

bool CheckParams(int ac, char **av)
{
    std::string filename;

    if (ac != 2)
        return (false);
    if (std::string(av[1]) == "")
        return (false);
    return (true);
}

void printerr(std::string msg)
{

}

bool NumberCheck(std::string & str)
{

}
