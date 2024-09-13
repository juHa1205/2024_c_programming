#include<iostream>
using namespace std;

int main() {


	int num;

	cout << "정수를 입력하세요 : ";
	cin >> num;

	for (int i = 1; i <= num; i++) {
		for (int j = 1; j < i; j++) {
			cout << ' ';
		}
		for (int k = i; k <= num - i + 1; k++) {
			cout << "*";
		}
	}
	return 0;

	
}