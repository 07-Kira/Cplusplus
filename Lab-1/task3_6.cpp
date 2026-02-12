#include <iostream>
#include <math.h>
using namespace std;

//добавить int main()
//инициализируем fac и s
// присваиваем k 10
// инициализируем в циклах for n и i, дописываем условия

int main(){
	setlocale(LC_ALL, "RUS");
	int k = 10, zn;
	float fac = 1, s = 0;

	for (int n = 1; n <= k; n++) {
		s += sin(1.0 + n);
	}

	for (int i = 1; i <= k; i++) {
		fac *= i;
	}

	zn = s / fac;
	s = s + zn;

	cout << "Результат: " << s;
	return 0;
}