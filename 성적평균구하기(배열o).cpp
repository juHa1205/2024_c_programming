#include<iostream>
using namespace std;

int main() {

	const int STUDENT = 10;
	int i, sum;
	i = 0;
	sum = 0;
	float average;

	int scores[STUDENT];
	for (i; i < STUDENT; i++) {
		cout << "�л����� ������ �Է��Ͻÿ�";
		cin >> scores[i];
		sum += scores[i];
	}
	average = sum / float(STUDENT);

	cout << "���� ���= " << average << endl;

	return 0;
}