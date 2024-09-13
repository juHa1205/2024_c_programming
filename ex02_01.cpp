#include<iostream>
using namespace std;

int main() {

	int a=1;
	int b=0;

	while (a != b) {
		cout << "두 정수를 입력하세요: ";
		cin >> a >> b;
		

		if (a > b) {
			cout << 1 << endl;
		}
		else {
			cout << 0 << endl;
		}
		cout << endl;
	}

	return 0;
}