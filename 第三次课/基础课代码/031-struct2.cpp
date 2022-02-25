#include <iostream>
using namespace std;

#define MaxSize 10
typedef struct {
	int age;
	double height;
}Person, *PPerson, Persons[MaxSize];

void printPerson(Person p) {
	cout << p.age << ", " << p.height << endl;
}

int main() {
	// ��ͨ����
	Person p;
	p.age = 10; // ��Ϊp����ͨ����������pp�ĳ�Ա��.����
	p.height = 17.5;
	printPerson(p);
	
	// ָ��
	PPerson pp = &p;
	pp->age = 17; // ��Ϊpp��ָ�����������pp�ĳ�Ա�� -> ����
	pp->height = 18.6;
	printPerson(p);
	printPerson(*pp);
	
	// ����
	Persons ps;
	cout << sizeof(ps) / sizeof(Person) << endl;
	ps[0].age = 77;  // �����Ա��������.����
	ps[0].height = 188;
	printPerson(ps[0]);
	
	return 0; 
}
