# include <iostream>

using namespace std;

int main(){
	
	// ��ͨ����,ӵ��Ψһ���ڴ�ռ�
	int a = 10;
	cout << &a << endl;  
	
	// �κβ���������ͬһ�ڴ�ռ��н���
	a = 89898;
	cout << &a <<  endl;
	
	// ָ����������Լ�¼�����ڴ�ռ�ĵ�ַ
	// ����ȥ���ܶ��ڴ�ռ�
	int b = 10;
	int c = 20;
	int d = 90;
	
	// ָ�����Ҫ��ʼ�ó������ޱ��˵�Ƥ�ϵķ�����
	int *p = &b;
	*p = 1;
	p = &c;
	*p = 1;
	p = &d;
	*p = 1;
	
	cout << b << "," << c << "," << d << endl; 
	
	double age = 17;
	// citAge�����age��������ͬһ���ڴ�ռ�
	double &citeAge = age;
	cout << age << "," << citeAge << endl;
	// ���Ƕ��ǲ�����ͬ���ڴ�ռ�
	// �޸�����һ������һ����ͬ���仯
	citeAge = 10;
	cout << age << "," << citeAge << endl;
	
	return 0; 
	
	return 0;
}
