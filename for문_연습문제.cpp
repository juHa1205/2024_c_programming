# include<iostream>
# include<string>
using namespace std;


int main() {
	// factorial �� ����Ͻÿ�
	int num;
	int factorial = 1;
	
	cout << "������ �Է��Ͻÿ�: ";
	cin >> num;
	for (int i = 1; i <= num; i++) {
		factorial *= i;
	}
	cout << num << "!�� " << factorial << "�Դϴ�.";
	return 0;
}