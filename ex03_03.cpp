# include<iostream>
# include<string>
using namespace std;
float myabs(float n);

int main() {

	float n;

	while (1) {
		cout << "숫자를 입력하세요 : ";
		cin >> n;

		if (n == 0) {
			cout << "프로그램을 종료합니다.";
			break;
		}
		cout << myabs(n) << endl << endl;

	}

	return 0;
}

float myabs(float n) {

	if (n < 0) {
		return (-1 * n);
	}
	else {
		return n;
	}

}