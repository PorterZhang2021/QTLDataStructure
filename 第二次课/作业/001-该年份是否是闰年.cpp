/*
  
  编写代码，从键盘输入任意年份的整数N，通过程序运行判断该年份是否为闰年。
  判断任意年份是否为闰年，需要满足以下条件中的任意一个：
   1. 该年份能被4整除同时不能被100整除；
   2. 该年份能被400整除

*/
# include <iostream>

using namespace std; 

int main(){
	
	int year;

	cout << "请输入年份:" << endl; 
	cin >> year;
	
	if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
		cout << "是闰年" << endl; 
	}else{
		cout << "不是闰年" << endl;
	}
	
	
	return 0;
} 
