# include <iostream>
using namespace std;

// 初始化操作
void init(int &a) {
	cout << "初始化操作..." << endl;
	a = 3;
} 

// 执行判断
bool judgeCondition(int a) {
	cout << "执行判断条件..." << endl;
	return a > 0; 
} 

// 善后操作
void tail(int &a) {
	cout << "执行尾部" << endl;
	a--;
} 

// 循环体
void body() {
	cout << "循环体执行..." << endl;
} 

int main() {
	int a;
	for(init(a); judgeCondition(a); tail(a)) {
		body();
	}
}
