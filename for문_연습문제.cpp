# include<iostream>
# include<string>
using namespace std;


int main() {
	// factorial 을 계산하시오
	int num;
	int factorial = 1;
	
	cout << "정수를 입력하시오: ";
	cin >> num;
	for (int i = 1; i <= num; i++) {
		factorial *= i;
	}
	cout << num << "!은 " << factorial << "입니다.";
	return 0;
}