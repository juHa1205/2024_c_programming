# include<iostream>
# include<string>
using namespace std;


int main() {

	string str;

	do {
		cout << "���ڿ��� �Է��Ͻÿ�: " << endl;
		getline(cin, str); // �ܼ�â�� �Է��� ���� str�� �����Ѵ�.
		cout << "������� �Է�: " << str << '\n'; // �Ǵٸ� �� �ٲٱ�
	} while (str != "����");

	return 0;
}