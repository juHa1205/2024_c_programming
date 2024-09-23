# include<iostream>
# include<string>
using namespace std;

int main() {

	for (int i = 0; i <= 5; i++) {
		for (int j = 1; j <= 5 - i;j++) {
			cout << "*";
		}
		cout << endl;
		for (int k = 1; k <= i + 1; k++) {
			cout << " ";
		}
	}


	return 0;
}