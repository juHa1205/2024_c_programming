#include<iostream>
using namespace std;

int main() {

	const int WIDTH = 9;
	const int HEIGHT = 3;

	int table[HEIGHT][WIDTH];
	int r, c;

	for (r = 0; r < HEIGHT; r++) {
		for (c = 0; c < WIDTH; c++) {
			table[r][c] = (r + 1) * (c + 1);
			cout << table[r][c] << ", ";
		}
		cout << endl;
	}

	return 0;
}