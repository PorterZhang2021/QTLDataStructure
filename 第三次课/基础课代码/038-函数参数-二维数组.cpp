# include <iostream>
using namespace std;

# define SIZE 3

/*
  传递二维数组num，大小为row行，SIZE列 
*/ 
void test(int num[][SIZE], int row) {
	for(int i = 0; i < row; ++i) {
		for(int j = 0; j < SIZE; ++j) {
			cout << num[i][j] << ",";
		}
		cout << endl;
	}
}

int main() {
	cout << "nums1:" << endl;
	int num1[2][SIZE]; // 2 * SIZE
	for(int i = 0; i < 2; ++i) {
		for(int j = 0; j < SIZE; ++j) {
			num1[i][j] = i + j;
		}
	} 
	
	test(num1, 2);
	
	cout << "nums2:" << endl;
	int num2[3][SIZE]; // 3 * SIZE
	for(int i = 0; i < 3; ++i) {
		for(int j = 0; j < SIZE; ++j) {
			num2[i][j] = i + j;
		}
	}
	
	test(num2, 3);
	
	return 0;
}
