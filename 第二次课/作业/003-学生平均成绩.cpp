// ����ʮ��ѧ���ĳɼ���Ȼ�������ʮ��ѧ��������ƽ��ֵ�������
# include "iostream"

using namespace std;

int main(){
	
	double stuScore[10];
	double score;
	double sumScore;
	double averScore;
	
	cout << "������ѧ���ɼ�" << endl;
	
	// ��ȡѧ���ɼ� 
	for(int i = 0; i < 10; i++){
		cin >> score;
		stuScore[i] = score;
	} 
	
//	����ȫ���ɼ� 
	for(int i = 0; i < 10; i++){
		sumScore += stuScore[i];
	}
	
//	����ƽ���ɼ�
	 averScore = sumScore / 10;
	 
	 cout << "ƽ���ɼ�Ϊ:" << averScore << endl; 
	
	return 0;
}

