#include <iostream>
using namespace std;

int main() {

	int num;
	int i = 1;

	cout << "���ڸ� �Է��ϼ���: ";
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
		cout << "1���� 10������ �������� �Է��ϼ���.";
	}

	

	return 0;
}