# include<iostream>
# include<string>
using namespace std;


int main() {

	string str;

	do {
		cout << "문자열을 입력하시오: " << endl;
		getline(cin, str); // 콘솔창에 입력한 값을 str에 저장한다.
		cout << "사용자의 입력: " << str << '\n'; // 또다른 줄 바꾸기
	} while (str != "종료");

	return 0;
}