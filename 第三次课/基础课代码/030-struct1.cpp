#include <iostream>

using namespace std;

#define MaxSize 10
typedef struct {
	int age;
	double height;
}Person, *PPerson, Persons[MaxSize]; 

int main(){
	// Person定义的是普通类型的结构体变量
	// 类比于int p1;
	Person p1;
	
	// 定义Person类型的指针变量
	// 两种方式等价
	Person *pp1 = &p1; // 方式一
	PPerson pp2 = &p1; // 方式二
	cout << "pp1指向了: " << pp1 << endl;
	cout << "pp2指向了: " << pp2 << endl;
	
	// 定义Person类型的数组，大小为MaxSize
	// 两种方式等价
	Person persons1[MaxSize]; // 方式一
	Persons persons2; // 方式二
	cout << "persons1数组中含有元素个数为:"
		 << sizeof(persons1)/sizeof(Person) << endl;
	cout << "persons2数组中含有元素个数为:"
		 << sizeof(persons2)/sizeof(Person) << endl;
		 
	return 0; 
}
