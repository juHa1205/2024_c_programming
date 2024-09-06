# include <iostream>
# include <iomanip>
using namespace std;

int main() {

	double pi = 3.141592;
	double root_2 = 1.414213;
	double c = 299792.458000;
	double g = 9.806650;


	cout.precision(7);
	cout << "원주율은 " << pi << " 이고," << endl;
	cout << "2의 제곱근은 " << root_2 << " 이다." << endl;
	cout << fixed;
	cout.precision(6);
	cout << "빛의 속도는 " << c << " m/s 이고," << endl;
	//cout << "빛의 속도는 " << setprecision(9) << c << "m/s 이고," << endl;
	cout << "중력 가속도는 " << g << " m/s 제곱 입니다.";
	
	return 0;
}