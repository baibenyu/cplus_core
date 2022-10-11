#include <iostream>
using namespace std;

int* func()
{
	//new关键字可以将数据开辟到堆区
	// 由程序员自己开辟(new)和释放(delete)
	//指针仍然是局部变量放在栈区,但对应的数值10放在堆区,所以指针p会被释放,但数据10不会
	//返回的是数据类型的指针
	int* p = new int (10);//申请数组的语法: int* arr = new int[10]
	return p;
}

int main()
{
	int* p = func();
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	delete p;//释放数组的语法: delete[] arr
	cout << *p << endl;
	return 0;
}