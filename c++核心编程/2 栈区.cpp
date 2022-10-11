#include <iostream>
using namespace std;

int* func(int b)//形参也存放在栈区
{
	//局部变量存放在栈区,在函数执行完后自动释放
	int a = 10;
	b = 100;
	//返回局部变量的地址
	return &a;
}


int main2()
{
	int* p = func(2);
	cout << *p << endl;// 在VS中的编译器可能默认采用new来申请空间,但在devc++中的gcc只会保留一次,第二次就清空了
	cout << *p << endl;
	return 0;
}