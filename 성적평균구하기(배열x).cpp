#include<iostream>
using namespace std;

int main() {
	
	const int STUDENT = 10;
	int grade,i, sum;
	i = 1;
	sum = 0;

	while (i <= 10) {
		cout << "�л����� ������ �Է��Ͻÿ�: ";
		cin >> grade;
		sum += grade;
		i++;
	}
	cout << "���� ���= " << sum / float(STUDENT);

	return 0;
}