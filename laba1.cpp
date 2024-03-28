#include <iostream>
#include <cmath>
#include <locale.h>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	float widht, hight, area, perimetr, diagonal;
	// Ввод данных
	cout << "Введите ширину прямоугольника" << endl;
	cin >> widht;
	cout << "Введите длину прямоугольника" << endl;
	cin >> hight;
	area = widht * hight; // Нахoждение площади. Формула S =  a * b
	perimetr = 2 * (widht + hight); // Нахождение периметра. Формула P = 2 * (a + b)
	diagonal = sqrt(widht * widht + hight * hight); // Нахождение диагонали. Формула  c = ?(a^2 + b^2)
	cout << "Площадь прямоугольника" << " " << area << endl;
	cout << "Периметр прямоугольника" << " " << perimetr << endl;
	cout << "Длина диагонали" << " " << diagonal << endl;
	return 0;
}
//commented
