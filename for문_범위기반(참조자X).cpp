#include<iostream>
using namespace std;

int main() {
	int list[]{ 1, 5, 3 };

	for (int i : list) { // 참조자 & 사용했을 때와 사용하지 않았을 때 차이 구분하기
		i = i * 2;
		cout << i << " ";
	}
	cout << endl;

	for (int i : list) {
		cout << i << " ";
	}
	return 0;
}