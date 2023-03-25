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

double to_double_round_2(double f) //rounding
{
    double left = (int)(f * 100 + .5);
    double right = (double) left / 100;

    return (right);
}

bool ParamsCheck(int ac, char **av)
{
    std::string filename;

    if (ac != 2)
        return (false);
    if (std::string(av[1]) == "")
        return (false);
    return (true);
}

bool    InputCheck(std::string & str)
{
    std::string date;
    std::string num;

    if (str[10] != '|')
        return (false);
    date = str.substr(0, 10);
    if (!DateCheck(date))
        return (false);
    
    return (true);
}

bool    isNumeric(std::string & str)
{
    size_t  i = -1;

    while(++i < str.length())
    {
        if (str[i] < '0' || str[i] > '9')
            return (false);
    }
    return (true);
}

bool    DateCheck(std::string & str)
{
    std::string     s1, s2, s3;
    int             year, month, day;

    if ((int)str.length() != 10)
        return (false);
    
    if (str[4] != '-' || str[7] != '-')
        return (false);

    //year
    s1 = str.substr(0, 4);
    if (!isNumeric(s1))
        return (false);

    //month
    s2 = str.substr(5, 2);
    if (s2[0] != '0' && s2[0] != '1')
        return (false);
    if (s2[0] == '0' && s2[1] == '0')
        return (false);
    if (s2[0] == '1' && s2[1] != '0' && s2[1] != '1' && s2[1] != '2')
        return (false);
    
    //day
    s3 = str.substr(8, 2);
    if (!isNumeric(s3))
        return (false);
    std::stringstream(s3) >> day;
    if (day < 1 || day > 31)
        return (false);
    int months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    std::stringstream(s1) >> year;
    std::stringstream(s2) >> month;

    if (!(year % 400) || (year % 100 && !(year % 4))) //leap year
        months[1] = 29;
    if (day > months[month - 1])
        return (false);
    return (true);
}

bool    NumberCheck(std::string & str)
{
    std::string num;
    long long   i;
    double      d;

    if(!InputCheck(str))
        return (false);
    num = str.substr(11, (int)str.length() - 11);

    std::stringstream   ssd(num);
    std::stringstream   ssi(num);

    ssd >> d;
    ssi >> i;
    if ((!ssd.eof() || ssd.fail()) && (!ssi.eof() || ssi.fail()))
	{
		std::cout << "Error: not a number.\n";
		return (false);
	}
	if (d < 0 || i < 0)
	{
		std::cout << "Error: not a positive number.\n";
		return (false);
	}
	else if (i > 1000 /* 2147483647 */)
	{
		std::cout << "Error: too large a number.\n";
		return (false);
	}
	return (true);
}
