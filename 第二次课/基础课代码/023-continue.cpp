# include <iostream>

using namespace std;

int main(){
	
	int i = 10;
	while(i-- >= 0){
		if(i % 2 == 0){
			// ����ѭ��ִ�������
			continue; 
		}
		cout << i << "\t";
	}
	
	return 0;
} 
