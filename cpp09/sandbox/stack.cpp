#include <iostream>
#include <stack>

using namespace std;
// test stack
stack<int> stack;

stack.push(21);
stack.push(22);
stack.push(24);
stack.push(25);

int num = 28;
stack.push(num);
cout << stack.top() << " ";
stack.pop();
stack.pop();
stack.pop();

while (!stack.empty())
{
    cout << stack.top() << " ";
    stack.pop();
}