# include <stdio.h>

int main(){
	
	for(
	// 初始化条件 ，进入循环前执行一次 
	int i = 1, j = 0;
	// 循环条件,每一次进入循环体前都要执行 
	i < 10;
	// 每善后操作，每一次循环体执行完之后都要执行 
	++i){
	  		j = j + i;
	  		printf("%d,", j);	
	}
	
	return 0;
}
