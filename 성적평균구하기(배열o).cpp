#include<iostream>
using namespace std;

int main() {

	const int STUDENT = 10;
	int i, sum;
	i = 0;
	sum = 0;
	float average;

	int scores[STUDENT];
	for (i; i < STUDENT; i++) {
		cout << "학생들의 성적을 입력하시오";
		cin >> scores[i];
		sum += scores[i];
	}
	average = sum / float(STUDENT);

	cout << "성적 평균= " << average << endl;

	return 0;
}