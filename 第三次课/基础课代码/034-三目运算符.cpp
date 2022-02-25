# include <iostream>
using namespace std;

int main() {
	int a = 1;
	// a大于10时，返回a本身，否则返回10
	int b = a > 10 ? a : 10; // 10
	// a小于10时，返回0，否则返回a本身
	int c = a < 10 ? 0 : a; // 0
	
	cout << b << endl;
	cout << c << endl; 
	
	// c语言中0是false，其他都是true
	int d = a ? 10 : -1;  // 10
	a = -1;
	int e = a ? 10 : -1; // 10
	a = 0;
	int f = a ? 10 : -1; // -1
	
	cout << d << endl;
	cout << e << endl;
	cout << f << endl;
	
	return 0; 
}
