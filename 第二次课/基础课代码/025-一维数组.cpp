# include <iostream>
using namespace std;

int main(){
	
	int ages[5];
	
	printf("�������������:\n");
	for(int i = 0; i < sizeof(ages)/sizeof(int); ++i){
		scanf("%d", &ages[i]);
	} 
	
	printf("��������������:\n");
	// sizeof(ages)/sizeof(int): ��������Ԫ�ظ���
	for(int i = 0; i < sizeof(ages)/sizeof(int); ++i){
		printf("%d\t", ages[i]);
	} 
	
	return 0;
}
