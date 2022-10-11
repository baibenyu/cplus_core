#include <iostream>
using namespace std;

// 程序分代码区与全局区
// 代码区特点是只读和共享
// 全局区中--全局变量,静态变量,常量
// 不在全局区--局部常量,局部变量

//全局变量
int ga = 10;
int gb = 10;

//全局常量
const int cga = 10;

int main1()
{
	//局部变量以及局部常量
	const int cla = 10;
	int a = 10;
	int b = 10;
	cout << (int)&cla << endl;
	cout << (int)&a << " " << (int)&b << "\n" << endl;
	
	//静态变量以及全局变量
	static int c = 10;
	static int d = 10;
	cout << (int)&ga << " " << (int)&gb << endl;
	cout << (int)&c << " " << (int)&d << "\n"  <<endl;

	//常量以及全局常量
	cout << (int)&"hello world" << endl;
	cout << (int)&cga << "\n" << endl;
	return 0;
}