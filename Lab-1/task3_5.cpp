#include <iostream>
using namespace std;

//добавить int main()
// s присваиваем тип данных float
// инициализируем i в цикле for
// дописываем условие дл€ цикла for

int main() {
	setlocale(LC_ALL, "RUS");
	int i, j, n;
	float s = 0;
	cout << "¬ведите число n: " << endl;
	cin >> n;

	for (i = 1; i <= n; i++)
		for (j = 1; j <= i; j++) {
			s += 1.0f / (i + 2 * j);
		}

	cout << "–езультат: " << s;
	return 0;
}