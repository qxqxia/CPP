#include <iostream>
#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
    std::map<std::string, double>::iterator it;
    std::map<std::string, double> dict;
    std::ifstream ifs;
    std::ofstream ofs;
    std::string input, data, line, s;

    if (!ParamsCheck(ac, av))
    {
        std::cout << "Error: could not open file.\n";
        return (1);
    }

    data = "data.csv";

    // open data.csv
    if (ifs.is_open())
        ifs.close();
    ifs.open(data.c_str());
    if (ifs.fail())
    {
        std::cout << "Error: Could not open file.\n";
        return (1);
    }

    // read data
    if (!ifs.eof())
        getline(ifs, line); //jeter thr headline
    while (!ifs.eof() && getline(ifs, line))
    {
        std::string left, right;

        left = line.substr(0, line.find(","));
        right = line.substr(line.find(",") + 1);
        dict[left] = atof(right.c_str());

        //std::cout << left << " <- the value is -> " << atof(right.c_str()) << "\n\n";
        //std::cout << left << " <- the value is -> " << dict[left] << '\n';
    }

    //open input.txt
    input = std::string(av[1]);
    if (ifs.is_open())
        ifs.close();
    ifs.open(input.c_str());
    if (ifs.fail())
    {
        std::cout << "Error: Could not open file.\n";
        return (1);
    }

    //read input
    if (!ifs.eof())
        getline(ifs,line); //jeter the headline
    while (!ifs.eof() && getline(ifs, line))
    {
        s = remove_whitesp(line);
        if (!InputCheck(s))
        {
            std::cout << "Error: bad input => " + line << '\n';
            continue;
        }
        if (!NumberCheck(s))
        {
            continue;
        }
        std::string key = s.substr(0, s.find("|"));
        std::string valstr = s.substr(s.find("|") + 1);
        double      val = atof(valstr.c_str());
        //std::cout << s << '\n';

        if (dict.count(key)) //if key is found
        {
            val = to_double_round_2(dict[key] * val); //
            s = to_string(val);
            if (s[s.length() - 1] == '0') //if end is 0, donot show it
            {
                s = s.substr(0, s.length() - 1);
            }
            //std::cout << s << '\n';
            std::cout << key << " => " << valstr << " = " YELLOW;
            if (s.find("+") == std::string::npos) //scientific notation not found
            {
                std::cout << s << "\n" RESET;
                continue ;
            }
            std::cout << std::setprecision(PRECISION) << val << "\n" RESET;
        }
        else
        {
            it = dict.upper_bound(key);
            if (it == dict.begin())
            {
               std::cout << key << " => " << valstr << " = 0" << '\n';
               continue ; 
            }
            it--;
            val = to_double_round_2 ((it->second * val)); //
            s = to_string(val);
            if (s[s.length() - 1] == '0') //if end is 0, donot show it
            {
                s = s.substr(0, s.length() - 1);
            }
            //std::cout << s << '\n';
            std::cout << key << " => " << valstr << " = " YELLOW;
            if (s.find("+") == std::string::npos) //scientific notation not found
            {
                std::cout << s << "\n" RESET;
                continue ;
            }
            std::cout << std::setprecision(PRECISION) << val << "\n" RESET;
        }
    }
}
