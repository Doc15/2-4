#include <iostream>   
#include <cmath>


using namespace std;

double func(double x)
{
    return (log(x) + 2 * x * x - 6); // Вычисление функции //
}

double find(double x0, double x1, double eps) //Метод хорд, x0 = 1,x1 = 2, eps = 0.0001//
{
    int iter = 0;
    cout << "x0= " << x0 << " x1= " << x1 << " ";
    do
    {
        x0 = x1 - ((x1 - x0) * func(x1)) / (func(x1) - func(x0));      // приближение корня по формуле
        x1 = x0 - ((x0 - x1) * func(x0)) / (func(x0) - func(x1));      // приближение корня 
        iter++;
    } while (fabs(func(x1)) > eps);   // находится ли решение в нужной точности
    cout << "\nИтерации : " << iter << endl;
    return x1;
}

int main()
{
    double x0, x1, eps;
    cout << "Метод Хорд\n";
    cout << "Введите x0 = ";
    cin >> x0;
    cout << "Введите x1 = ";
    cin >> x1;
    cout << "Введите eps = ";
    cin >> eps;
    cout << "Приближенное значение = " << find(x0, x1, eps);
}

