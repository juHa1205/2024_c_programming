#include <iostream>
using namespace std;

int main() {

	int num;
	int i = 1;

	cout << "숫자를 입력하세요: ";
	cin >> num;

	if (num >= 1 && num <= 10) {
		while (i <= num) {

			if (i % 3 != 0) {
				cout << i << " ";
			}
			else {
				cout << "X ";
			}
			i += 1;
		}
	}
	else {
		cout << "1부터 10사이의 정수값을 입력하세요.";
	}

	

	return 0;
}