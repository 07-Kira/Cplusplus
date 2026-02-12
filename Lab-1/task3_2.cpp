#include <iostream>
using namespace std;
//отсутствует явный тип (требуется "int")
//убрать скобку перед float и i:int
//разделить cout и cin для удобства
//заменить n на a
//Ошибка в логике определения max/min: поменять a1 = max; a2 = min; на max = a1; min = a2;
//в цикле а и = поставить в двойные ковычки 
//Бесконечный цикл. В цикле while добавить счетчик i++
//
int main(){
    setlocale(LC_ALL, "RUS");
float a, a1, a2, max, min, res;

cout << "a = ";
cin >> a;
cout << "a1 = ";
cin >> a1;
cout << "a2 = ";
cin >> a2;

if (a1 > a2) {
	max = a1;
	min = a2;
}

else {
	max = a2;
	min = a1;
}


int i = 4;

while (i < 10) {
    cout << "a"<< i << " = ";
    cin >> a;

    if (a < min) {
        min = a;
    }
    if (a > max) {
        max = a;
    }

    i++;
}

res = max - min;

cout << "Результат " << max << " - " << min << " = " << res;

return 0;
}
