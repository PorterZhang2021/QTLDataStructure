# include <iostream>
using namespace std;

int main() {
	int age = 10;
	if(age == 10) {
		// 真
		printf("age为10,"); 
	}
	
	if(age%2 != 0) {
		// 假
		printf("age是奇数,"); 
	}else{
		printf("age是偶数,");
	}
	
	if(age < 0){
		// 假
	 	printf("age小于0,"); 
	}else if(age < 10){
		// 假
		printf("age在0-10,"); 
	}
	
	if(age > 0){
		// 假
		printf("age小于0,"); 
	}else if(age < 10){
		// 假 
		printf("age在0-10,");
	}else {
		// 上全假时执行 
		printf("age大于10");
	}
	
	if(age % 2 == 1 || age >= 10) {
		// 真
		printf("age是奇数,或者age大于等于10"); 
	} 
	
	if(age % 2 == 1 && age >= 10) {
		// 假
		printf("age是奇数，且age大于等于10"); 
	}
	
	return 0; 
}
