# include <iostream>

using namespace std;

int main() {
	int age = 10;
	int height = 180;
	
	if (age < 18){
		// 满足条件，执行if内的内容
		cout << "未成年" << endl; 
	}
	
	if (height > 180){
		// 不满足条件，不执行if内内容
		cout << "你长得真高" << endl; 
	}
	
	return 0;
} 
