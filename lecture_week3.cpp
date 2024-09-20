#include<iostream>
#include<string>
using namespace std;

int main() {
	
	string s;
	int a;
	cout << "주민등록번호를 입력하시오: ";
	cin >> s;
	//cin.ignore();
	cout << "-가 제거된 주민등록번호: ";
	while (1) {
		a = s.find('-');		
		if (a < 0) {
			break;
		}
		s.erase(a, 1);
	}
	
	cout << s << endl;


	return 0;
}