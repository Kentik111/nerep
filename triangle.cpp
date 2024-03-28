#include <iostream>
#include <locale.h>
#include <cmath>
using namespace std;
float a, b, c; // инициализация переменных, содержащих значение длин сторон треугольника

int main(){
    setlocale(LC_ALL, "Rus"); // исправление ошибок при работе с русским языком
    //инициализация переменных, содержащих значение периметра и площади
    float perimeter;
    float half_perimeter;
    float area;

    // ввод пользователем длин сторон треугольника
    cout << "Введите три стороны треугольника через пробел -> ";
    cin >> a >> b >> c;

    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        // вычисление периметра
        perimeter = a + b + c;
        cout << "\nПериметр треугольника равен " << perimeter << "\n";

        // вычисление площади по формуле Герона
        half_perimeter = perimeter / 2;
        area = sqrt(half_perimeter * (half_perimeter - a) * (half_perimeter - b) * (half_perimeter - c));
        cout << "\nПлощадь треугольника по формуле Герона равна " << area << "\n";

        // проверка на равнобедренность
        if ((a == b) || (a == c) || (b == c))
            cout << "\nТреугольник равнобедренный!";
        else
            cout << "\nТреугольник неравнобедренный!";
    }
    else {
        cout << "\nТреугольник не существует!";
    }
    
}
