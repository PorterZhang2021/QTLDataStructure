# include <iostream> 
using namespace std;

void test1(int *a) {
	// �޸��β�a��ֵ��ʵ�β���仯
	a = NULL; 
} 

void test2(int *& a) {
	// �޸��β�a��ֵ��ʵ�λ�һ��仯
	a = NULL; 
}

int main() {
	int aux = 10;
	int *a = &aux;
	
	cout << "ָ�����a�洢�ĵ�ַ�ǣ�" << a << endl;
	
	test1(a);
	cout << "����test1����֮��a�洢�ĵ�ַ��: " << a << endl;
	
	test2(a);
	cout << "����test2����֮��a�洢�ĵ�ַ��: " << a << endl;
	
	return 0; 
}
