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

	cout << "1부터 10까지의 정수의 합 = " << sum << endl;

	return 0;
}