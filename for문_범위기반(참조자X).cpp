#include<iostream>
using namespace std;

int main() {
	int list[]{ 1, 5, 3 };

	for (int i : list) { // ������ & ������� ���� ������� �ʾ��� �� ���� �����ϱ�
		i = i * 2;
		cout << i << " ";
	}
	cout << endl;

	for (int i : list) {
		cout << i << " ";
	}
	return 0;
}