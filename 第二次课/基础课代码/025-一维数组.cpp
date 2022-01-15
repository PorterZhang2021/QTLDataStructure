# include <iostream>
using namespace std;

int main(){
	
	int ages[5];
	
	printf("请输入五个年龄:\n");
	for(int i = 0; i < sizeof(ages)/sizeof(int); ++i){
		scanf("%d", &ages[i]);
	} 
	
	printf("您输入的五个年龄:\n");
	// sizeof(ages)/sizeof(int): 这个数组的元素个数
	for(int i = 0; i < sizeof(ages)/sizeof(int); ++i){
		printf("%d\t", ages[i]);
	} 
	
	return 0;
}
