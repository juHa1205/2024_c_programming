# include <iostream>

using namespace std;

int main() {

	int  n = 10;
	while (n > 0) {					// n<=0 이 될 때 까지 반복
		cout << n << " ";
		n--;
	}
	cout << "발사!\n";

	int k = 5;

	cout << k << endl;
	cout << k++ << endl;
	cout << k << endl;
	cout << ++k << endl;

	return 0;
}