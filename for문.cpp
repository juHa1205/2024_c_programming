# include<iostream>
# include<string>
using namespace std;


int main() {
	/*
	for (int i = 1; i < 10; i++) {
		cout << i << " ";
	}
	*/

	int sum = 0;
	for (int i = 1; i <= 10; i++)
		sum += i;

	cout << "1���� 10������ ������ �� = " << sum << endl;

	return 0;
}