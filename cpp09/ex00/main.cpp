#include <iostream>
#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
    (void)ac;
    (void)av;
    std::map<std::string, double>::iterator it;
    std::map<std::string, double> dict;
    std::ifstream ifs;
    std::ofstream ofs;
    std::string input, data, line, s;

    data = "data.csv";

    // open data.csv
    if (ifs.is_open())
        ifs.close();
    ifs.open(data.c_str());
    if (ifs.fail())
    {
        std::cout << "Could not open file.\n";
        return (1);
    }

    // read data
    if (!ifs.eof())
        getline(ifs, line);
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
        std::cout << "Could not open file.\n";
        return (1);
    }

    //read input
    if (!ifs.eof())
        getline(ifs,line);
    while (!ifs.eof() && getline(ifs, line))
    {
        s = remove_whitesp(line);
        std::string key = s.substr(0, s.find("|"));
        std::string valstr = s.substr(s.find("|") + 1);
        double      val = atof(valstr.c_str());
        //std::cout << s << '\n';
        
    }


}
