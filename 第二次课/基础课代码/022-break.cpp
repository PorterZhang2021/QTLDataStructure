# include <iostream>

using namespace std;

int main(){
	
	// ��һ��ѭ��
	for(int i = 0; i < 10; ++i){
		// �ڶ���ѭ��
		for(int j = 1; j < 10; j++){
			printf("i=%d, j=%d\n", i, j);
			if (i == j){
				break; // �����ѭ�� �����ڶ���ѭ�� 
			}
		} 
	} 
	
	return 0;
}
