# include <iostream>;

using namespace std;

int main() {

	int t;

	cout << "초를 입력하세요 : ";
	cin >> t;
	cout << endl << endl;

	cout << t / 60 << " 분 " << t % 60 << " 초";

	return 0;

}