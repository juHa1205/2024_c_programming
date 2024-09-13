#include<iostream>
using namespace std;

int main() {

	int a, b, c;

	cout << "정수 세 개를 입력하세요: ";
	cin >> a;
	cin >> b;
	cin >> c;

	if (a % 2 == 0) {
		cout << a << endl;
	}
	if (b % 2 == 0) {
		cout << b << endl;
	}
	if (c % 2 == 0) {
		cout << c << endl;
	}

	return 0;
}