# include <iostream>
using namespace std;

int main() {
	int age = 10;
	if(age == 10) {
		// ��
		printf("ageΪ10,"); 
	}
	
	if(age%2 != 0) {
		// ��
		printf("age������,"); 
	}else{
		printf("age��ż��,");
	}
	
	if(age < 0){
		// ��
	 	printf("ageС��0,"); 
	}else if(age < 10){
		// ��
		printf("age��0-10,"); 
	}
	
	if(age > 0){
		// ��
		printf("ageС��0,"); 
	}else if(age < 10){
		// �� 
		printf("age��0-10,");
	}else {
		// ��ȫ��ʱִ�� 
		printf("age����10");
	}
	
	if(age % 2 == 1 || age >= 10) {
		// ��
		printf("age������,����age���ڵ���10"); 
	} 
	
	if(age % 2 == 1 && age >= 10) {
		// ��
		printf("age����������age���ڵ���10"); 
	}
	
	return 0; 
}
