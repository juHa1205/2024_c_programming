# include<iostream>
# include<string>
using namespace std;
int gcd(int a, int b);
void swap(int a, int b);

int main() {
	
	int a, b;

	while (1) {
		cout << "두 개의 숫자를 입력하세요 : ";
		cin >> a >> b;

		if (a > b) {
		}
		else {
			swap(a, b);
		}

		if (a == 0 && b == 0) {
			cout << "프로그램을 종료합니다.";
			break;
		}
		else {
			cout << "입력한 숫자 " << a << ", " << b << "의 최대공약수는 " << gcd(a, b) << " 입니다." << endl << endl;
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