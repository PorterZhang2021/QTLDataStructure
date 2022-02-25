# include <iostream>
using namespace std;

// 模拟++i
int ppNum(int &i) {
	// ++i
	// 返回的是i+1
	// i本身也增加1
	i = i + 1;
	return i; 
} 

// 模拟i++
int numPP(int &i) {
	// i++
	// 返回的是i
	// i本身增加1
	int temp = i;
	i += 1;
	return temp; 
} 

int main() {
	int a = 10, b  = 10;
	cout << ppNum(a) << endl;
	// 11
	cout << a << endl;
	// 11
	cout << numPP(b) << endl;
	// 10
	cout << b << endl;
	// 11
}
