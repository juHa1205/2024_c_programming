# include<iostream>
using namespace std;

int main() {

	// do_while문을 사용하여서 구구단을 출력하여라.
	int num;
	int n = 1;

	cout << "구구단 중에서 출력하고 싶은 단을 입력하시오: ";
	cin >> num;

	do {
		cout << num << "x" << n << "=" << num * n << endl;
		n += 1;
	} while (n < 10);

	return 0;
}