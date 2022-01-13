# include <stdio.h>

int main() {
	
	int k = 10;
	k *= 2; // k = k * 2
	printf("%d\n", k); // 20
	
	int i = 10, j = 10;
	printf("%d\n", i--); // 10
	printf("%d\n", --j); // 9
	
	printf("%d\n", i); // 9
 	printf("%d\n", j); // 9
	
	return 0;
} 
