# include <iostream>
using namespace std;
// ��n�Ľ׳�

int fac(int n) {
	if(n == 0 || n == 1) {
		cout << "���fac(" << n << ")�Ľ׳˽��" << endl;
		return 1; 
	} else {
		cout << "��" << n << "! �ֽ�Ϊ " << n << " * fac(" << n - 1 
		<< ")" << endl;
		
		int result = fac(n-1);
		
		cout << "���" << n << "* fac(" << n-1 
		<< ")" << endl;
		
		return n * result;
	}
} 

int main() {
	printf("5!=%d\n", fac(5));
	return 0;
}
