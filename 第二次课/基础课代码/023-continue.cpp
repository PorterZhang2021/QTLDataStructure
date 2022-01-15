# include <iostream>

using namespace std;

int main(){
	
	int i = 10;
	while(i-- >= 0){
		if(i % 2 == 0){
			// 本次循环执行体结束
			continue; 
		}
		cout << i << "\t";
	}
	
	return 0;
} 
