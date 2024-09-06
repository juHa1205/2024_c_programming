# include <iostream>;

using namespace std;

int main() {

	float a, b;

	cout << "두 개의 수를 입력하세요 : ";
	cin >> a;
	cin >> b;

	cout << endl;
	cout << a << "+" << b << " = " << int(a + b) << endl;
	cout << a << "-" << b << " = " << a - b << endl;
	cout << a << "*" << b << " = " << a * b << endl;
	cout << a << "/" << b << " = " << a / b << endl;

}