#include<iostream>
using namespace std;

int main() {
	/*
	for (int i = 1; i < 10; i++) {
		cout << i << " ";
		if (i == 4) {
			break;
		}
	}*/

	int i = 0;
	do {
		i++;
		cout << "continue ���� ���� �ִ� ����" << endl;
		continue;
		cout << "contiune ���� �Ŀ� �ִ� ����" << endl;

	} while (i < 3);


	return 0;
}