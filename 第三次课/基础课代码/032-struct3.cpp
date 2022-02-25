#include <iostream>

using namespace std;

typedef struct Person {
	// ���Գ�Ա�õ����Լ���ʱ��������Ҫָ��Person����
	char *name;
	int age;
	double height;
	// ��ż
	struct Person *mate; // �õ��˽ṹ���Լ� 
}Person, *PPerson;

void printPerson(Person p) {
	cout << "������" << p.name << ", ����: " << p.age << ", "
		 << "���: "  << p.height << endl ;
    cout << "��ż����: " << p.mate->name
    	 << ", ��ż����: " << p.mate->age
    	 << ", ��ż���: " << p.mate->height << endl;
  	 cout << endl;
}

int main() {
	Person lili, lihua;
	// ��ż
	lili.mate = &lihua;
	lihua.mate = &lili;
	// ��Ϣ
	lili.age = 23;
	lili.height = 1.65;
	lili.name = "lili";
	
	lihua.age = 25;
	lihua.height = 1.75;
	lihua.name = "lihua";
	
	// ��ӡlili����Ϣ
	printPerson(lili);
	// ��ӡlihua
	printPerson(lihua);
	
	return 0; 
}
