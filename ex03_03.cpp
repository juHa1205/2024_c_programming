# include<iostream>
# include<string>
using namespace std;
float myabs(float n);

int main() {

	float n;

	while (1) {
		cout << "���ڸ� �Է��ϼ��� : ";
		cin >> n;

		if (n == 0) {
			cout << "���α׷��� �����մϴ�.";
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