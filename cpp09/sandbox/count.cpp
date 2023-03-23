#include <iostream>
#include <map>

int main()
{
    std::map<char, int> mymap;
    char    c;

    mymap ['a'] = 101;
    mymap ['c'] = 202;
    mymap ['f'] = 303;

    for(c = 'a'; c < 'h'; c++)
    {
        std::cout << c;
        if (mymap.count(c))
            std::cout << " is an element of mymap.\n";
        else
            std::cout << " is not an element of mmap.\n";
    }
    return 0;
}