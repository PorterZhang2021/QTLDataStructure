#include <iostream>

using namespace std;

typedef struct Person {
	// 属性成员用到了自己的时候，这里需要指定Person名字
	char *name;
	int age;
	double height;
	// 配偶
	struct Person *mate; // 用到了结构体自己 
}Person, *PPerson;

void printPerson(Person p) {
	cout << "姓名：" << p.name << ", 年龄: " << p.age << ", "
		 << "身高: "  << p.height << endl ;
    cout << "配偶姓名: " << p.mate->name
    	 << ", 配偶年龄: " << p.mate->age
    	 << ", 配偶身高: " << p.mate->height << endl;
  	 cout << endl;
}

int main() {
	Person lili, lihua;
	// 配偶
	lili.mate = &lihua;
	lihua.mate = &lili;
	// 信息
	lili.age = 23;
	lili.height = 1.65;
	lili.name = "lili";
	
	lihua.age = 25;
	lihua.height = 1.75;
	lihua.name = "lihua";
	
	// 打印lili的信息
	printPerson(lili);
	// 打印lihua
	printPerson(lihua);
	
	return 0; 
}
