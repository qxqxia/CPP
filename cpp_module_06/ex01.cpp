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
void test1(){
	try{
		if(
	}
}

strtold 会扫描参数optr字符串,跳过前面的空格字符，直到遇上数字或正负符号才开始做转换，
到出现非数字或字符串结束时('\0')才结束转换,并将结果返回。
若字符串optr中包含不符合条件的字符,这些字符将保存在nptr中。
例如:optr=“15451.5fjiggr12345”,
strtold返回值是15451.5,nptr中的值是fjiggr12345。