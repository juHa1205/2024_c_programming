# include <iostream>
# include <iomanip>
using namespace std;

int main() {

	int year, month, day;

	cout << "���� ��¥�� �Է��ϼ���." << endl;
	cout << "���� : ";
	cin >> year;
	cout << "�� : ";
	cin >> month;
	cout << "�� : ";
	cin >> day; 

	cout << endl;

	cout << "������ " << year << "�� " << month << " �� " << day << " �� �Դϴ�." << endl;
	/*
	cout << "���� ��¥�� ";
	cout << year << ".";
	cout.width(2);
	cout.fill('0');
	cout << month << ".";
	cout.width(2);
	cout.fill('0');
	cout << day << " �Դϴ�.";
	*/

	cout << "���� ��¥�� " << year << "." << setw(2) << setfill('0') << month << "." << setw(2) << setfill('0') << day << ". �Դϴ�.";

	return 0;
}