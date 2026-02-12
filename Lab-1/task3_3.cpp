#include <iostream>
using namespace std;

// добавить int main()
// добавляем инициализацию n и y=1
// ввод числа n
// при проверки на четность делим n на 2, а не на 1
//знак неравенства обозначаем !=
// добавляем инициализацию для i
// добавляем условие в цикл for i<=n
// после i++ убираем ;
// I заменяем на i
// при умнажении числа на i, пишем либо y=y*i либо y*=i

int main() {
	setlocale(LC_ALL, "RUS");
	int n, y=1;
	cout << "Ввести число: " << endl;
	cin >> n;

	if (n % 2 != 0) {
		for (int i = 1; i<=n; i++) {
			y *= i;
		}
	}

	else {
		for (int i = 1; i<=n; i += 2) {
			y *= i;
		}
	}

	cout << y << endl;
	return 0;
}