// ����һ��5��4�еĶ�ά���飬��������������(��0��ʼ)��Ԫ�ص��ܺ�
# include <stdio.h>

int main(){
	
	int nums[5][4];  //5��4�еĶ�ά���� 
	int sum; // ����ܺ� 
	
	// ������ʾ
	printf("������һ��5��4�еĶ�ά����\n"); 
	
	// �˲������ڻ�ȡ��ά��������� 
	// ���� 
	for(int i = 0; i < sizeof(nums)/sizeof(nums[1]); i++){
		// ����
		for(int j = 0; j < sizeof(nums[i])/sizeof(int); j++){
			// ��ȡ��ά��������� 
			scanf("%d", &nums[i][j]);
		} 
	} 
	
	// ������Ԫ���ܺ�
	for(int i =0; i < sizeof(nums)/sizeof(nums[1]); i++){
		// �ж��ǲ��������� 
		if (i % 2 != 0){
			for(int j = 0; j < sizeof(nums[i])/sizeof(int); j++){
					// �����ܺ�
					sum += nums[i][j];
			}
		} 
	} 
	
	// ������
	printf("�����е��ܺ�Ϊ:%d", sum); 
	
	return 0;
}
