# include <iostream>
# include <iomanip>
using namespace std;

int main() {

	double pi = 3.141592;
	double root_2 = 1.414213;
	double c = 299792.458000;
	double g = 9.806650;


	cout.precision(7);
	cout << "�������� " << pi << " �̰�," << endl;
	cout << "2�� �������� " << root_2 << " �̴�." << endl;
	cout << fixed;
	cout.precision(6);
	cout << "���� �ӵ��� " << c << " m/s �̰�," << endl;
	//cout << "���� �ӵ��� " << setprecision(9) << c << "m/s �̰�," << endl;
	cout << "�߷� ���ӵ��� " << g << " m/s ���� �Դϴ�.";
	
	return 0;
}