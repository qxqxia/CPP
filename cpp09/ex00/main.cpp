#include <iostream>
#include <sstream> //stringstream

using namespace std;

int countWords(string str)
{
    stringstream s(str);

    string word;

    int n = 0;
    while (s >> word)
        n++;
    return n;
}

int main()
{
    string s = "geeks for geeks geeks "
               "contribution placements";
    cout << "number of words are: " << countWords(s);
    return 0;
}