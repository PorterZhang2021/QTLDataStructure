# include <iostream>
# include <stdlib.h> // malloc��free

using namespace std;

typedef struct {
	int age;
	double height;
}Person, *PPerson;

void printPerson(Person p) {
	cout << p.age << ", " << p.height << endl;
} 

int main() {
	// ��̬����һ�� Person
	PPerson pperson = (Person *)malloc(sizeof(Person));
	pperson->age = 10;
	pperson->height = 19.8;
	printPerson(*pperson);
	
	// ��ʹ���ˣ���Ҫ�ֶ��ͷ�
	free(pperson);
	
	return 0; 
}
