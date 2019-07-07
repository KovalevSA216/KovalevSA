#include "conio.h"
#include "locale.h"
#include "iostream"

using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	double xnach = -1.0, xkon = 1.0, dx = 0.01, eps = 0.001;
	printf("Табулирование функции в виде таблицы:\n");
	printf("x\t\tF(x)\t\tĘîëč÷ĺńňâî\n");
	while (xnach <= xkon)
	{
		int Kolvo = 1, a = 2, b = 2, c = 3, d = 5;
		double Fx = (double)a*powf(xnach, (double)b) / (double)c;
		while (powf(-1, b)*(double)a*powf(xnach, (double)b) / (double)c >= eps)
		{
			Fx = Fx + powf(-1, b)*(double)a*powf(xnach, (double)b) / (double)c;
			Kolvo++;
			a++;
			b = b + 2;
			c = c + d;
			d = d + 2;
		}
		printf("%lf\t%lf\t%d\n", xnach, Fx, Kolvo);
		xnach = xnach + dx;
	}
	getch();
}
