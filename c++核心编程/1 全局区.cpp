#include <iostream>
using namespace std;

// ����ִ�������ȫ����
// �������ص���ֻ���͹���
// ȫ������--ȫ�ֱ���,��̬����,����
// ����ȫ����--�ֲ�����,�ֲ�����

//ȫ�ֱ���
int ga = 10;
int gb = 10;

//ȫ�ֳ���
const int cga = 10;

int main1()
{
	//�ֲ������Լ��ֲ�����
	const int cla = 10;
	int a = 10;
	int b = 10;
	cout << (int)&cla << endl;
	cout << (int)&a << " " << (int)&b << "\n" << endl;
	
	//��̬�����Լ�ȫ�ֱ���
	static int c = 10;
	static int d = 10;
	cout << (int)&ga << " " << (int)&gb << endl;
	cout << (int)&c << " " << (int)&d << "\n"  <<endl;

	//�����Լ�ȫ�ֳ���
	cout << (int)&"hello world" << endl;
	cout << (int)&cga << "\n" << endl;
	return 0;
}