#include<iostream>
using namespace std;

int main() {

	int num[3];
	int i = 0;

	cout << "�� ������ �Է��ϼ��� : ";

	while (i < 3) {
		cin >> num[i];
		i += 1;
	}
	i = 0;
	while (i < 3) {
		if (num[i] % 2 == 0) {
			cout << num[i] << endl;
		}
		i += 1;
	}

	return 0;
}