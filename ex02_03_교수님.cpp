#include <iostream>
using namespace std;

int main() {

	int num;
	int i = 1;
	do {
		cout << "���ڸ� �Է��ϼ��� : ";
		cin >> num;

		if ((num > 11) || (num < 1)) {
			cout << "�ٽ� �Է��ϼ���. \n\n";

		}
	} while ((num > 11) || (num < 1));

	while (i <= num) {
		if (i % 3 == 0) {
			cout << "X ";
		}
		else {
			cout << i << " ";
		}
		i++;
	}


	return 0;
}