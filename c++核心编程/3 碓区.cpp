#include <iostream>
using namespace std;

int* func()
{
	//new�ؼ��ֿ��Խ����ݿ��ٵ�����
	// �ɳ���Ա�Լ�����(new)���ͷ�(delete)
	//ָ����Ȼ�Ǿֲ���������ջ��,����Ӧ����ֵ10���ڶ���,����ָ��p�ᱻ�ͷ�,������10����
	//���ص����������͵�ָ��
	int* p = new int (10);//����������﷨: int* arr = new int[10]
	return p;
}

int main()
{
	int* p = func();
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	delete p;//�ͷ�������﷨: delete[] arr
	cout << *p << endl;
	return 0;
}