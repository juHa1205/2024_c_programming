# include<iostream>

using namespace std;

int main() {

	int age;

	cout << "나이를 입력하시오: ";
	cin >> age;


	if (age > 12 && age <= 19) {
		cout << "청소년입니다.";
	}
	


	return 0;
}