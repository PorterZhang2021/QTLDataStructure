# include <iostream>
using namespace std;

// ��ʼ������
void init(int &a) {
	cout << "��ʼ������..." << endl;
	a = 3;
} 

// ִ���ж�
bool judgeCondition(int a) {
	cout << "ִ���ж�����..." << endl;
	return a > 0; 
} 

// �ƺ����
void tail(int &a) {
	cout << "ִ��β��" << endl;
	a--;
} 

// ѭ����
void body() {
	cout << "ѭ����ִ��..." << endl;
} 

int main() {
	int a;
	for(init(a); judgeCondition(a); tail(a)) {
		body();
	}
}
