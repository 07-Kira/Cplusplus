#include <iostream>
using namespace std;

//добавить int main()
// в инициализации rez и rezs не приравниваем, а отдельно обнуляем
//cout и cin убираем скобки и разделяем числа << и >> соответственно
//дописываем условия цикла for

int main(){
	setlocale(LC_ALL, "RUS");
	int k, x, m, n;

	int s, rez = 0, rezs = 0;

	cout << "n: ";
	cin >> n;
	cout << "x: ";
	cin >> x;

	for (k = 1; k <= n; k++) {
		for (m = k; m <= n; m++) {
			s = (x + k) / m;
			rez += s;
			rezs = rezs + rez;
		}
	}
	cout << "Результат " << rezs;
	return 0;
}
