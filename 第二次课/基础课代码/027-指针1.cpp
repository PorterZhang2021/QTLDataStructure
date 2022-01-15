# include <iostream>

using namespace std;

int main(){
	
	// 普通变量,拥有唯一的内存空间
	int a = 10;
	cout << &a << endl;  
	
	// 任何操作，都在同一内存空间中进行
	a = 89898;
	cout << &a <<  endl;
	
	// 指针变量，可以记录任意内存空间的地址
	// 可以去到很多内存空间
	int b = 10;
	int c = 20;
	int d = 90;
	
	// 指针变量要开始用超能力修别人地皮上的房子了
	int *p = &b;
	*p = 1;
	p = &c;
	*p = 1;
	p = &d;
	*p = 1;
	
	cout << b << "," << c << "," << d << endl; 
	
	double age = 17;
	// citAge与变量age操作的是同一个内存空间
	double &citeAge = age;
	cout << age << "," << citeAge << endl;
	// 它们都是操作相同的内存空间
	// 修改其中一个，另一个会同步变化
	citeAge = 10;
	cout << age << "," << citeAge << endl;
	
	return 0; 
	
	return 0;
}
