#include <iostream>
using namespace std;

/*
  获取最小值
  演示：普通传参，函数内外独立 
*/
int getMin(int a, int b, int c) {
	// a在a、b中是最小的
	if(a > b) {
		a = b;
	} 
	
	// 新的a在a、c中是最小的
	if(a > c) {
		a = c;
	} 
	
	return a;
}

// 引用：函数内外参数一起改变
void swapValue(int &a, int &b) {
	if(a != b) {
		a ^= b;
		b ^= a;
		a ^= b;
	}
} 

// 指针：函数内外参数一起改变
void swapValue(int *a, int *b) {
	if(*a != *b){
		*a ^= *b;
		*b ^= *a;
		*a ^= *b;
	}
} 

int main() {
	// 函数内外互不影响
 	int a = 3, b = 2, c =1;
 	cout << getMin(a, b, c) << endl; // 1
 	// a、b、c仍然不变
	 cout << a << ", " << b << ", " << c << endl;
	 // 3, 2, 1 
	 
	 // 使用引用，让函数内外相应参数一起变化
	 swapValue(a, b);
	 cout << a << ", " << b << endl;
	 // 2, 3
	 
	 // 使用指针，让函数内外相应参数一起变化
	 a = 3;
	 b = 2;
	 swapValue(&a, &b);
	 cout << a << ", " << b << endl;
	 // 2, 3
	 return 0; 
}
