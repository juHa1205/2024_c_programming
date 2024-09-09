# include<iostream>

using namespace std;

int main() {

	int age;

	cout << "나이를 입력하시오: ";
	cin >> age;
	

	if (age >= 20) {
		cout << "성인입니다.";
	}
	else if (age >= 14) {
		cout << "청소년입니다.";
	}
	else if (age >= 5) {
		cout << "어린이입니다.";
	}
	else {
		cout << "애기입니다.";
	}


	return 0;
}