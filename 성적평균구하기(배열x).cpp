#include<iostream>
using namespace std;

int main() {
	
	const int STUDENT = 10;
	int grade,i, sum;
	i = 1;
	sum = 0;

	while (i <= 10) {
		cout << "학생들의 성적을 입력하시오: ";
		cin >> grade;
		sum += grade;
		i++;
	}
	cout << "성적 평균= " << sum / float(STUDENT);

	return 0;
}