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
	// 普通变量
	Person p;
	p.age = 10; // 因为p是普通变量，所以pp的成员用.访问
	p.height = 17.5;
	printPerson(p);
	
	// 指针
	PPerson pp = &p;
	pp->age = 17; // 因为pp是指针变量，所以pp的成员用 -> 访问
	pp->height = 18.6;
	printPerson(p);
	printPerson(*pp);
	
	// 数组
	Persons ps;
	cout << sizeof(ps) / sizeof(Person) << endl;
	ps[0].age = 77;  // 数组成员的属性用.访问
	ps[0].height = 188;
	printPerson(ps[0]);
	
	return 0; 
}
