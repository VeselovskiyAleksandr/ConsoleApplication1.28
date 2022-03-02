// ConsoleApplication1.28.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//Урок 25. Зад#include "hemostat.h"ача 1. Симулятор проведения операций.

#include "seam.cpp"
#include "skalpel.cpp"
#include "hemostat.cpp"
#include "tweezers.cpp"
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	double xH=0, xT=0, yH=0, yT=0, x0, x1, y0, y1, k=0;
	string strS = "skalpel", strH = "hemostat", strT = "tweezers", strSut="suture", str = "";
	bool surgicalSuture=false;
	cout << "\n Координаты начала разреза.\n";
	cout << "Starting point X = ";
	cin >>x0;
	cout << "Starting point Y = ";
	cin >>y0;
	cout << "\n Координаты конца разреза.";
	cout << "End point X = ";
	cin >> x1;
	cout << "End point Y = ";
	cin >>y1;
	while (surgicalSuture != true) {
		cout << "\nОжидание команды от хирурга (выберите инструмент: skalpel, hemostat, tweezers, suture). ";
		cin >> str;
		if (str == strS) {
		k= scalpel(x0, y0, x1, y1);			
		}
		else if (str == strH) {
			hemostat(xH, k);
			yH = k * xH;
		}
		else if (str == strT) {
			tweezers(xT, k);
			yT = k * xT;
		}
		else if (str == strSut) {
			surgicalSuture = seam(x0, x1);
		}
		str = "";
	}
	cout << "\nОперация прошла успешно!";
	return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
