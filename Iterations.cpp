#include <iostream>   
#include <cmath>


using namespace std;

double find(double x0, double eps)            // Метод итераций, x0 = 1, eps = 0.0001  
{
	double rez; int iter = 0;
	cout << "x0= " << x0 << " ";             // начальное приближние корня
	//rez x0 уточнение решения
	do {
		rez = x0;                            // менее точное знавчение
		x0 = sqrt(((6 - log(x0)) / 2));      // более точное решение по формуле
		iter++;
	} while (fabs(rez - x0) > eps);           // находится ли решение в нужной точности
	cout << "\nИтерации : " << iter << endl;
	return x0;
}
int main()
{
	double x0, eps;
	cout << "Метод Итераций\n";
	cout << "Введите x0 = ";
	cin >> x0;
	cout << "Введите eps = ";
	cin >> eps;
	cout << "Приближенное значение = " << find(x0, eps);
}
