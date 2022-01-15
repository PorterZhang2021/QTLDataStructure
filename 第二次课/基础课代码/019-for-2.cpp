# include <stdio.h>

int main(){
	for (int i = 0; i < 10; ++i) {
		// i离开这个for就失效了 
	}
	
	// 访问不了i，会报错 
	printf("i=%d", i); 
	return 0;
}
