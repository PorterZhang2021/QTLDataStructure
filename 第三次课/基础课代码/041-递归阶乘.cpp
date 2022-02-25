# include <iostream>
using namespace std;
// 求n的阶乘

int fac(int n) {
	if(n == 0 || n == 1) {
		cout << "汇聚fac(" << n << ")的阶乘结果" << endl;
		return 1; 
	} else {
		cout << "将" << n << "! 分解为 " << n << " * fac(" << n - 1 
		<< ")" << endl;
		
		int result = fac(n-1);
		
		cout << "汇聚" << n << "* fac(" << n-1 
		<< ")" << endl;
		
		return n * result;
	}
} 

int main() {
	printf("5!=%d\n", fac(5));
	return 0;
}
