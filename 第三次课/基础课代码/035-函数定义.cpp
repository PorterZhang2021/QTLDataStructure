# include <iostream>
using namespace std;

/*
  �������ܣ�����a��b����Сֵ
*/

int getMin(int a, int b){
	return a < b ? a : b;
}

int main(){
	cout << getMin(10, 20) << endl;
	cout << getMin(-10, -20) << endl;
}
