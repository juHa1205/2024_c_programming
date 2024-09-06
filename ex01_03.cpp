# include <iostream>
# include <iomanip>
using namespace std;

int main() {

	int year, month, day;

	cout << "오늘 날짜를 입력하세요." << endl;
	cout << "연도 : ";
	cin >> year;
	cout << "월 : ";
	cin >> month;
	cout << "일 : ";
	cin >> day; 

	cout << endl;

	cout << "오늘은 " << year << "년 " << month << " 월 " << day << " 일 입니다." << endl;
	/*
	cout << "오늘 날짜는 ";
	cout << year << ".";
	cout.width(2);
	cout.fill('0');
	cout << month << ".";
	cout.width(2);
	cout.fill('0');
	cout << day << " 입니다.";
	*/

	cout << "오늘 날짜는 " << year << "." << setw(2) << setfill('0') << month << "." << setw(2) << setfill('0') << day << ". 입니다.";

	return 0;
}