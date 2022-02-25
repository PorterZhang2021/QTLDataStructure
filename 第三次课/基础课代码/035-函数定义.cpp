# include <iostream>
using namespace std;

/*
  函数功能：返回a、b的最小值
*/

int getMin(int a, int b){
	return a < b ? a : b;
}

int main(){
	cout << getMin(10, 20) << endl;
	cout << getMin(-10, -20) << endl;
}
