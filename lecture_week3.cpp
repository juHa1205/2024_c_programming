#include<iostream>
#include<string>
using namespace std;

int main() {
	
	string s;
	int a;
	cout << "�ֹε�Ϲ�ȣ�� �Է��Ͻÿ�: ";
	cin >> s;
	//cin.ignore();
	cout << "-�� ���ŵ� �ֹε�Ϲ�ȣ: ";
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