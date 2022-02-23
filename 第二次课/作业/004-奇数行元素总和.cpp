// 构造一个5行4列的二维数组，计算所有奇数行(从0开始)的元素的总和
# include <stdio.h>

int main(){
	
	int nums[5][4];  //5行4列的二维数组 
	int sum; // 存放总和 
	
	// 文字提示
	printf("请输入一个5行4列的二维数组\n"); 
	
	// 此部分用于获取二维数组的数据 
	// 外行 
	for(int i = 0; i < sizeof(nums)/sizeof(nums[1]); i++){
		// 内列
		for(int j = 0; j < sizeof(nums[i])/sizeof(int); j++){
			// 获取二维数组的数据 
			scanf("%d", &nums[i][j]);
		} 
	} 
	
	// 奇数行元素总和
	for(int i =0; i < sizeof(nums)/sizeof(nums[1]); i++){
		// 判断是不是奇数行 
		if (i % 2 != 0){
			for(int j = 0; j < sizeof(nums[i])/sizeof(int); j++){
					// 加入总和
					sum += nums[i][j];
			}
		} 
	} 
	
	// 输出结果
	printf("奇数行的总和为:%d", sum); 
	
	return 0;
}
