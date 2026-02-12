#include <iostream>
#include <math.h>
using namespace std;

//добавить int main()
//исправить cuot на cout
//текст в двойные ковычки
//дописываем условие в цикле for
// sqr это корень, а нам нужно возведение в степень pow()
//условие if взять в скобки
// неравно прописываем !=
//исправляем вывод


int main() {
	int n, i, k, l, s;

	cout << "Enter n";
	cin >> n;

	for (i = 1; i <= n; i++) {

		s = pow(i, 3) * i - 3 * i + pow(n, 2) + n;

		if (s % 3 == 0) {
			k = s % 3;
		}
		if (k != 0)
			l = 1 + s;

		cout << "Result=" << l << endl;
		return 0;
	}
}