#include <iostream>
#include <stdexcept>

using namespace std;
/*class A
{
public:
	int a;
};
class B : virtual public A
{
public:
	int b;
};
class C : virtual  public A
{
public:
	int c;
};
class D : public B, public C
{
public:
	int d;
};
int main()
{
	D d;
	d.a = 5;
	cout << d.a << endl;
	return 0;
}*/


strtold 会扫描参数optr字符串, 跳过前面的空格字符，直到遇上数字或正负符号才开始做转换， 到出现非数字或字符串结束时('\0') 才结束转换, 并将结果返回。 若字符串optr中包含不符合条件的字符, 这些字符将保存在nptr中。 例如 : optr =“15451.5fjiggr12345”,
strtold返回值是15451 .5, nptr中的值是fjiggr12345。

<limits> 中没有double的最大最小值

1. static_cast 用法:
用于类层次结构中基类和子类之间指针或引用的转换。 
进行上行转换（把子类的指针或引用转换成基类表示）是安全的；
进行下行转换（把基类指针或引用转换成子类指针或引用）时，由于没有动态类型检查，所以是不安全的

2. reinterpret_cast
参考IBM C++

1.A pointer to any integral type large enough to hold it
（指针转向足够大的整数类型）
2. A value of integral or enumeration type to a pointer
(从整形或者enum枚举类型转换为指针)
3. A pointer to a function to a pointer to a function of a different
type （从指向函数的指针转向另一个不同类型的指向函数的指针）
4. A pointer to an object to a pointer to an object of a different type
（从一个指向对象的指针转向另一个不同类型的指向对象的指针）
5. A pointer to a member to a pointer to a member of a different class
or type, if the types of the members are both function types or
object types （从一个指向成员的指针转向另一个指向类成员的指针！或者是类型，如果类型的成员和函数都是函数类型或者对象类型）

3. dynamic_cast
使用dynamic_cast有一个必要条件就是基类A中必须存在虚函数;
类中存在虚函数，就说明它有想要让基类指针或引用指向派生类对象的情况，此时转换才有意义