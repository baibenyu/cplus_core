#include <iostream>
using namespace std;

int* func(int b)//�β�Ҳ�����ջ��
{
	//�ֲ����������ջ��,�ں���ִ������Զ��ͷ�
	int a = 10;
	b = 100;
	//���ؾֲ������ĵ�ַ
	return &a;
}


int main2()
{
	int* p = func(2);
	cout << *p << endl;// ��VS�еı���������Ĭ�ϲ���new������ռ�,����devc++�е�gccֻ�ᱣ��һ��,�ڶ��ξ������
	cout << *p << endl;
	return 0;
}