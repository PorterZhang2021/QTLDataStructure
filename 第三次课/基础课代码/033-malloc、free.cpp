# include <iostream>
# include <stdlib.h> // malloc、free

using namespace std;

typedef struct {
	int age;
	double height;
}Person, *PPerson;

void printPerson(Person p) {
	cout << p.age << ", " << p.height << endl;
} 

int main() {
	// 动态创建一个 Person
	PPerson pperson = (Person *)malloc(sizeof(Person));
	pperson->age = 10;
	pperson->height = 19.8;
	printPerson(*pperson);
	
	// 不使用了，需要手动释放
	free(pperson);
	
	return 0; 
}
