# include <iostream>

using namespace std;

int main() {

	int  n = 10;
	while (n > 0) {					// n<=0 �� �� �� ���� �ݺ�
		cout << n << " ";
		n--;
	}
	cout << "�߻�!\n";

	int k = 5;

	cout << k << endl;
	cout << k++ << endl;
	cout << k << endl;
	cout << ++k << endl;

	return 0;
}