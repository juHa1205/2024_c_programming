# include<iostream>
using namespace std;

int main() {

	// do_while���� ����Ͽ��� �������� ����Ͽ���.
	int num;
	int n = 1;

	cout << "������ �߿��� ����ϰ� ���� ���� �Է��Ͻÿ�: ";
	cin >> num;

	do {
		cout << num << "x" << n << "=" << num * n << endl;
		n += 1;
	} while (n < 10);

	return 0;
}