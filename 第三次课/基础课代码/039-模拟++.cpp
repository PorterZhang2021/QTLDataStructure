# include <iostream>
using namespace std;

// ģ��++i
int ppNum(int &i) {
	// ++i
	// ���ص���i+1
	// i����Ҳ����1
	i = i + 1;
	return i; 
} 

// ģ��i++
int numPP(int &i) {
	// i++
	// ���ص���i
	// i��������1
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
