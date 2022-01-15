# include <iostream>

using namespace std;

void judge(int age){
	if (age > 10) {
		cout << "你十岁以上了" << endl;
	} else if (age > 5){
		cout << "你大于5岁但小于等于10岁" << endl; 
	}
}

int main(){
	judge(11);
	judge(6);
	judge(3);  // if 与 else if 都不满足
	
	return 0; 
}
