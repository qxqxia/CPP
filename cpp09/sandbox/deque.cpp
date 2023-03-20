# include <iostream>
# include <deque>

//test deque
using namespace std;

void showDeque(deque<int> g)
{
    deque<int>::iterator it;
    for(it = g.begin(); it != g.end(); ++it){
        cout << '\t' << *it;
    }
    cout << '\n';
}

int main()
{
    deque<int>  d;

    d.push_back(10);
    d.push_front(20);
    d.push_back(30);
    d.push_front(15);
    cout << "The deque d is : ";
    showDeque(d);

    cout << "\nd.size() : " << d.size();
    cout << "\nd.max_size() : " << d.max_size();
    cout << "\nd.at(2) : " << d.at(2);
    cout << "\nd.front() : " << d.front();
    cout << "\nd.back() : " << d.back();

    cout << "\nd.pop_front() : ";
    d.pop_front();
    showDeque(d);
 
    cout << "\nd.pop_back() : ";
    d.pop_back();
    showDeque(d);
 
    return 0;
}