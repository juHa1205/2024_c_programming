# include<iostream>
# include<string>
using namespace std;

int main() {

	int num;

	while (1) {
		cout << "���ڸ� �Է��ϼ��� : ";
		cin >> num;

		if (num <= 9 && num >= 1) {
			break;
		}
		else {
			cout << "�ٽ� �Է��ϼ���. " << endl << endl;
		}

	}
	
	for (int i = 1; i <= 9; i++ ) {
		for (int j = 1; j <= i*num; j++) {
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}