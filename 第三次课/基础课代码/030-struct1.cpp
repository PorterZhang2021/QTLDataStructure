#include <iostream>

using namespace std;

#define MaxSize 10
typedef struct {
	int age;
	double height;
}Person, *PPerson, Persons[MaxSize]; 

int main(){
	// Person���������ͨ���͵Ľṹ�����
	// �����int p1;
	Person p1;
	
	// ����Person���͵�ָ�����
	// ���ַ�ʽ�ȼ�
	Person *pp1 = &p1; // ��ʽһ
	PPerson pp2 = &p1; // ��ʽ��
	cout << "pp1ָ����: " << pp1 << endl;
	cout << "pp2ָ����: " << pp2 << endl;
	
	// ����Person���͵����飬��СΪMaxSize
	// ���ַ�ʽ�ȼ�
	Person persons1[MaxSize]; // ��ʽһ
	Persons persons2; // ��ʽ��
	cout << "persons1�����к���Ԫ�ظ���Ϊ:"
		 << sizeof(persons1)/sizeof(Person) << endl;
	cout << "persons2�����к���Ԫ�ظ���Ϊ:"
		 << sizeof(persons2)/sizeof(Person) << endl;
		 
	return 0; 
}
