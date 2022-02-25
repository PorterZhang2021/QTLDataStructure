#include <iostream>
using namespace std;

/*
  ��ȡ��Сֵ
  ��ʾ����ͨ���Σ������������ 
*/
int getMin(int a, int b, int c) {
	// a��a��b������С��
	if(a > b) {
		a = b;
	} 
	
	// �µ�a��a��c������С��
	if(a > c) {
		a = c;
	} 
	
	return a;
}

// ���ã������������һ��ı�
void swapValue(int &a, int &b) {
	if(a != b) {
		a ^= b;
		b ^= a;
		a ^= b;
	}
} 

// ָ�룺�����������һ��ı�
void swapValue(int *a, int *b) {
	if(*a != *b){
		*a ^= *b;
		*b ^= *a;
		*a ^= *b;
	}
} 

int main() {
	// �������⻥��Ӱ��
 	int a = 3, b = 2, c =1;
 	cout << getMin(a, b, c) << endl; // 1
 	// a��b��c��Ȼ����
	 cout << a << ", " << b << ", " << c << endl;
	 // 3, 2, 1 
	 
	 // ʹ�����ã��ú���������Ӧ����һ��仯
	 swapValue(a, b);
	 cout << a << ", " << b << endl;
	 // 2, 3
	 
	 // ʹ��ָ�룬�ú���������Ӧ����һ��仯
	 a = 3;
	 b = 2;
	 swapValue(&a, &b);
	 cout << a << ", " << b << endl;
	 // 2, 3
	 return 0; 
}
