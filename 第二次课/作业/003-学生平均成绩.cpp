// 输入十个学生的成绩，然后计算这十个学生分数的平均值，并输出
# include "iostream"

using namespace std;

int main(){
	
	double stuScore[10];
	double score;
	double sumScore;
	double averScore;
	
	cout << "请输入学生成绩" << endl;
	
	// 获取学生成绩 
	for(int i = 0; i < 10; i++){
		cin >> score;
		stuScore[i] = score;
	} 
	
//	计算全部成绩 
	for(int i = 0; i < 10; i++){
		sumScore += stuScore[i];
	}
	
//	计算平均成绩
	 averScore = sumScore / 10;
	 
	 cout << "平均成绩为:" << averScore << endl; 
	
	return 0;
}

