#include "skalpel.h"
#include <iostream>
#include <locale.h>
#include <string>
using namespace std;

double scalpel(double x0, double y0, double x1, double y1) {
	cout << "\n������ ��������.";
	return (y1 - y0) / (x1 - x0);
}