# include <iostream>

using namespace std;

int main(){
	
	int a, b, c;
	int sum;
	
	for (int i = 100; i <= 499; i++){
		sum = i;
		a = i % 10;
		b = i / 10 % 10;
		c = i / 100;
		
		if(sum == a * a * a + b * b * b + c * c * c){
			cout << sum << "是水仙花数,满足" << c << "^3 + " << b << "^3 + " << a << "^3 + " << "=" << sum << endl; 
		}
		
	}
	
	
	return 0;
} 
