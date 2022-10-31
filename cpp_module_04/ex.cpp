#include <iostream>
#include <string>
//当基类指针指向一个子类对象，通过这个指针调用子类和基类同名成员函数的时候，
//基类声明为虚函数「子类不写也可以」就会调子类的这个函数，不声明就会调用基类的.
using namespace std;

class A{
	public:
		A(){cout << "A() called." << endl;}
		//virtual void func() = 0;
		~A(){cout << "~A() called." << endl;}
		virtual void func(){cout << "A func() called." << endl;}
};

class B: public A{
	public:
		B(){cout << "B() called." << endl;}
		 ~B(){cout << "~B() called." << endl;}
		virtual void func(){cout << "B func() called." << endl;}
};

int main(){
	//A a;
	//a.func();
	//B b;
	//b.func();
	A *p = new B;
	p->func();
	return (0);
}
