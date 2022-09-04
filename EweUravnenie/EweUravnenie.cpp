#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	double a, b, c, D, x1, x2;
	cout << "Эта программа решает квадратное уравнение вида ax^2+bx+c=0" << endl;
	cout << "Введите a,b,c :" << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	D = b * b - 4 * a * c;
	if (a == 0){                       // Если a=0, уравнение сводится к виду bx+c=0
		if (b == 0.0 && c == 0.0) {
			cout << "X - любое число";
		}
		else if (b == 0.0) {
			cout << "Решений нет" << endl;
		}
		else {
			x1 = -c / b;
			cout << "Ответ: " << x1 << endl;
		}
	}
	else if (D > 0){
		x1 = ((-b) + sqrt(D)) / (2 * a);
		x2 = ((-b) - sqrt(D)) / (2 * a);
		cout << "x1 = " << x1 << endl;
		cout << "x2=" << x2 << endl;
	}
	else if(D == 0) {
		x1 = (-b) / (2 * a);
		cout << "x = " << x1 << endl;
	}
	else if(D < 0){
		cout << "Дискриминант меньше нуля, нет корней";
	}
		
}