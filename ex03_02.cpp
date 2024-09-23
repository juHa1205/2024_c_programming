# include<iostream>
# include<string>
using namespace std;

int main() {

	int num;

	while (1) {
		cout << "숫자를 입력하세요 : ";
		cin >> num;

		if (num <= 9 && num >= 1) {
			break;
		}
		else {
			cout << "다시 입력하세요. " << endl << endl;
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