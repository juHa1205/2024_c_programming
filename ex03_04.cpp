# include<iostream>
# include<string>
using namespace std;
int gcd(int a, int b);
void swap(int a, int b);

int main() {
	
	int a, b;

	while (1) {
		cout << "�� ���� ���ڸ� �Է��ϼ��� : ";
		cin >> a >> b;

		if (a > b) {
		}
		else {
			swap(a, b);
		}

		if (a == 0 && b == 0) {
			cout << "���α׷��� �����մϴ�.";
			break;
		}
		else {
			cout << "�Է��� ���� " << a << ", " << b << "�� �ִ������� " << gcd(a, b) << " �Դϴ�." << endl << endl;
		}
	}
	
	return 0;
}

void swap(int a, int b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
}


int gcd(int a, int b) {

	int result = 0;

	for (int i = 1; i <= a; i++) {
		if (a % i == 0 && b % i == 0) {
			result = i;
		}
	}
	return result;
}