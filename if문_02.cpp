# include<iostream>

using namespace std;

int main() {

	int age;

	cout << "���̸� �Է��Ͻÿ�: ";
	cin >> age;
	

	if (age >= 20) {
		cout << "�����Դϴ�.";
	}
	else if (age >= 14) {
		cout << "û�ҳ��Դϴ�.";
	}
	else if (age >= 5) {
		cout << "����Դϴ�.";
	}
	else {
		cout << "�ֱ��Դϴ�.";
	}


	return 0;
}