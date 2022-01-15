#include <iostream>

using namespace std;

int main(){
	
	int ages[2][5];
	
	printf("请输入a、b的五个年龄:\n");
	for(int i = 0; i < sizeof(ages)/sizeof(ages[1]); ++i){
		for(int j = 0; j < sizeof(ages[i])/sizeof(int); ++j){
			scanf("%d", &ages[i][j]);
		}
	} 
	
	printf("您输入a、b的五个年龄：\n");
	for(int i = 0; i < sizeof(ages)/sizeof(ages[1]); ++i){
		for(int j = 0; j < sizeof(ages[i])/sizeof(int); ++j){
			printf("%d \t", ages[i][j]);
		}
		printf("\n");
	} 
	
	
	
	return 0;
}
