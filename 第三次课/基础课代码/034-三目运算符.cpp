# include <iostream>
using namespace std;

int main() {
	int a = 1;
	// a����10ʱ������a�������򷵻�10
	int b = a > 10 ? a : 10; // 10
	// aС��10ʱ������0�����򷵻�a����
	int c = a < 10 ? 0 : a; // 0
	
	cout << b << endl;
	cout << c << endl; 
	
	// c������0��false����������true
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
