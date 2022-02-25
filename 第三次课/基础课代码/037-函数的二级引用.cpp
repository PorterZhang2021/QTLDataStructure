# include <iostream> 
using namespace std;

void test1(int *a) {
	// 修改形参a的值，实参不会变化
	a = NULL; 
} 

void test2(int *& a) {
	// 修改形参a的值，实参会一起变化
	a = NULL; 
}

int main() {
	int aux = 10;
	int *a = &aux;
	
	cout << "指针变量a存储的地址是：" << a << endl;
	
	test1(a);
	cout << "调用test1函数之后a存储的地址是: " << a << endl;
	
	test2(a);
	cout << "调用test2函数之后a存储的地址是: " << a << endl;
	
	return 0; 
}
