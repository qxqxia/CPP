#include "PmergeMe.hpp"

//vector
void mergeSort(std::vector<int>& v)
{
    if (v.size() > 1)
    {
        int i, j, k;
        int mid = v.size() / 2;

        std::vector<int>    left(v.begin(), v.begin() + mid);
        std::vector<int>    right(v.begin()+ mid, v.end());

        mergeSort(left);
        mergeSort(right);
        i = j = k = 0;
        while (i < (int)left.size() && j < (int)right.size())
        {
            if (left[i] < right[j])
            {
                v[k] = left[i];
                ++i;
            }
            else
            {
                v[k] = right[j];
                ++j;
            }
            ++k;
        }
        while(i < (int)left.size())
        {
            v[k] = left[i];
            ++i;
            ++k;
        }
        while(j < (int)right.size())
        {
            v[k] = right[j];
            ++j;
            ++k;
        }
    }
}

//deque
void mergeSort(std::deque<int> & d)
{
    std::deque<int> left,right;
    int i, mid, size;

    if (d.size() < 2)
        return ;
    size = (int)d.size();
    mid = size / 2;
    i = -1;
    //left
    while(++i < mid)
    {
        left.push_back(d.back());
        d.pop_back();
    }
    i =-1;
    //right
    while(++i < size - mid)
    {
        right.push_back(d.back());
        d.pop_back();
    }

    mergeSort(left);
    mergeSort(right);

    //merge
    while (!left.empty() && !right.empty())
    {
        if (left.front() < right.front())
        {
            d.push_back(left.front());
            left.pop_front();
        }
        else
        {
            d.push_back(right.front());
            right.pop_front();
        }
    }
    while(!left.empty())
    {
        d.push_back(left.front());
        left.pop_front();
    }
    while(!right.empty())
    {
        d.push_back(right.front());
        right.pop_front();
    }
}

bool isNumeric(std::string s)
{
    size_t i;

    if (s == "")
        return (false);
    i = -1;
    while(++i < s.length())
    {
        if (s[i] < '0' || s[i] > '9')
            return (false);
    }
    return (true);
}

void printVector(std::vector<int> v, bool option)
{
    if (option == BEFORE)
        std::cout << "Before:\t" YELLOW;
    if (option == AFTER)
        std::cout << "After: \t" GREEN;
    if (v.size() < 11)
    {
        int i = -1;
        while(++i < (int)v.size())
            std::cout << v[i] << ' ';   
    }
    else
    {
        int i = -1;
        while(++i < 4)
            std::cout << v[i] << ' ';
        std::cout << RESET "[...]";
    }
    std::cout << "\n" RESET;
}

void printDeque(std::deque<int> d, bool option)
{
    std::deque<int>::iterator   it;
    
    if (option == BEFORE)
        std::cout << "Before:\t" YELLOW;
    if (option == AFTER)
        std::cout << "After: \t" GREEN;
    if (d.size() < 11)
    {
        // int i = -1;
        // while(++i < (int)d.size())
        //     std::cout << d[i] << ' ';   
        it = d.begin();
        while(it != d.end())
        {
            std::cout << *it << ' ';
            it++;
        }
    }
    else
    {
        // int i = -1;
        // while(++i < 4)
        //     std::cout << d[i] << ' ';
        // std::cout << RESET "[...]";
        it = d.begin();
        while(it != d.begin() + 4)
        {
            std::cout << *it << ' ';
            it++;
        }
        std::cout << RESET "[...]";
    }
    std::cout << "\n" RESET;
}