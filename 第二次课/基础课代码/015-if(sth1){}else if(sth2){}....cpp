# include <iostream>

using namespace std;

void judge(int age){
	if (age > 10) {
		cout << "��ʮ��������" << endl;
	} else if (age > 5){
		cout << "�����5�굫С�ڵ���10��" << endl; 
	}
}

int main(){
	judge(11);
	judge(6);
	judge(3);  // if �� else if ��������
	
	return 0; 
}
