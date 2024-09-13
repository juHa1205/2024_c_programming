#include <iostream>
using namespace std;

int main() {

	int num;
	int i = 1;
	do {
		cout << "숫자를 입력하세요 : ";
		cin >> num;

		if ((num > 11) || (num < 1)) {
			cout << "다시 입력하세요. \n\n";

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