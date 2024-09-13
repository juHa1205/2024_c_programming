#include<iostream>
using namespace std;

int main() {
	int i = 1;
	int num;
	int n = 1;
	int a = 2;
	int k = 1;
	int temp;

	cout << "정수를 입력하세요: ";
	cin >> num;
	temp = num;
	cout << endl;

	while (k <= num) {
		while (n <= temp) {
			cout << "*";
			n += 1;
		}
		cout << endl;
		temp -= 1;
		for (i = 1; i < a; i++) {
			cout << " ";
		}
		n = 1;
		a += 1;
		k += 1;

	}
	return 0;

}