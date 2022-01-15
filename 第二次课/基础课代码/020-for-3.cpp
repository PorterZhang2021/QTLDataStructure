# include <stdio.h>

int main() {
	// i在整个main函数中都存在 
	int i = 0;
	for(; i < 10; ++i){
		
	}
	
	
	printf("i=%d", i); // i可以访问，最终结果为10
	return 0; 
}
