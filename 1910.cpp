#include <iostream>
using namespace std;
int main() {
	//Series1◦
	//. Даны десять вещественных чисел.Найти их сумму.
	/*int s = 0;
	int x;
	for (int i = 1; i <= 10; i++) {
		cin >> x;
		s += x;
	}
	cout << s << endl;*/

	//Series2. Даны десять вещественных чисел. Найти их произведение
	/*double p = 1;
	double x;
	int i = 1;
	while (i <= 10) {
		cin >> x;
		p *= x;
		i++;
	}
	cout << p << endl;*/

	//Series3. Даны десять вещественных чисел. Найти их среднее арифметическое.
	/*double s = 0;
	double x;
	double sr = 0;
	for (int i = 1; i <= 10; i++) {
		cin >> x;
		s = s + x;
		sr = s / 10;
	}
	cout << sr << endl;*/

	//Series4. Дано целое число N и набор из N вещественных чисел. Вывести
	//сумму и произведение чисел из данного набора.
	/*double p = 1;
	double s = 0;
	int n;
	double x;
	cin >> n;
	int i = 1;
	while (i <= n) {
		cin >> x;
		p *= x;
		s += x;
		i++;
	}
	cout << p << endl;
	cout << s << endl;*/


	//Series5. Дано целое число N и набор из N положительных вещественных
	//чисел.Вывести в том же порядке целые части всех чисел из данного
	//	набора(как вещественные числа с нулевой дробной частью), а также
	//	сумму всех целых частей.
	/*double s = 0;
	double x;
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> x;
		cout << (int)x << endl;
		s = s + (x - (int)x);
	}
	cout << s << endl;*/


	//Дано целое число N и набор из N положительных вещественных
	//чисел.Вывести в том же порядке дробные части всех чисел из данного набора(как вещественные числа с нулевой целой частью), а также
	//	произведение всех дробных частей.
	double p = 1;
	double x;
	int n;
	cin >> n;
	int i = 1;
	while (i <= n) {
		cin >> x;
		cout << x - (int)x << endl;
		p = p * (x - (int)x);
		i++;
	}
	cout << p << endl;

}