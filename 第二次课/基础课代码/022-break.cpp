# include <iostream>

using namespace std;

int main(){
	
	// 第一个循环
	for(int i = 0; i < 10; ++i){
		// 第二个循环
		for(int j = 1; j < 10; j++){
			printf("i=%d, j=%d\n", i, j);
			if (i == j){
				break; // 最近的循环 ——第二个循环 
			}
		} 
	} 
	
	return 0;
}
