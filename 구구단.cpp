# include <iostream>

using namespace std;

int main() {

// while���� ����Ͽ��� �������� ����Ͽ���.
	int num;
	int n = 1;

	cout << "������ �߿��� ����ϰ� ���� ���� �Է��Ͻÿ�: ";
	cin >> num;

	while (n < 10) {
		cout << num << "x" << n << "=" << num * n << endl;
		n += 1;
	}

	return 0;
}