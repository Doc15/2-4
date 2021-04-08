#include <iostream>   
#include <cmath>


using namespace std;

double find(double x0, double eps) //Метод Ньютона , x0 = 1, eps = 0.0001 //
{
    double f, df; int iter = 0;
    cout << "x0= " << x0 << " ";
    do {
        f = log(x0) + 2*x0*x0 - 6;     // функция
        df = 4*x0 + 1/x0;              // первая производная
        x0 = x0 - f / df;              //  формула
        iter++;
    } while (fabs(f) > eps);          // находится ли решение в нужной точности
    cout << "\nИтерации : " << iter << endl;
    return x0;
}
int main()
{
    double x0, eps;
    cout << "Метод Ньютона\n";
    cout << "Введите x0 = ";
    cin >> x0;
    cout << "Введите eps = ";
    cin >> eps;
    cout << "Приближенное значение = " << find(x0, eps);
}

