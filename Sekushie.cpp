#include <iostream>   
#include <cmath>

using namespace std;

double func(double x)
{
    return (log(x) + 2*x*x - 6); // Вычисление функции //
}

double find(double x0, double x1, double eps) //Метод секущих, x0 = 1, x1 = 2, eps = 0.0001//
{
    double rez = 0, y;
    int iter = 0;
    cout << "x0= " << x0 << " x1= " << x1 << " ";                  // х0- начало  х1 - конец
    // присваивание переменным других переменных зацикливание для точности вычислений
	do {
        y = rez;
        rez = x1 - ((x1 - x0) / (func(x1) - func(x0)) * func(x1)); // формула секущих
        x1 = x0;
        x1 = rez;
        iter++;
    } while (fabs(y - rez) > eps);  // находится ли решение в нужной точности
    cout << "\nИтерации : " << iter << endl;
    return rez;
}

int main()
{
    double x0, x1, eps;
    cout << "Метод Секущих\n";
    cout << "Введите x0 = ";
    cin >> x0;
    cout << "Введите x1 = ";
    cin >> x1;
    cout << "Введите eps = ";
    cin >> eps;
    cout << "Приближенное значение = " << find(x0, x1, eps);
    
}
