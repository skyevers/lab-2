#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <locale.h>

bool isInArea(double, double);
double f(double);

void main()
{
	setlocale(LC_ALL, "RUS");

	int k;
	double x, y;
	
	printf("Выберите номер задания (1 или 2):\n");
	printf("Задание №1\n");
	printf("Задание №2\n");
	scanf("%d", &k);
	printf("\n");

	switch (k)
	{
	case 1:
	{
		printf("Введите x: ");
		scanf("%lf", &x);
		printf("Введите y: ");
		scanf("%lf", &y);
		printf("Результат: %o\n\n", isInArea(x, y));

		break;
	}
	case 2:
	{
		printf("Введите x: ");
		scanf("%lf", &x);
		printf("Результат: %f\n\n", f(x));

		break;
	}
	}

	system("pause");

}


bool isInArea(double x, double y)
{
	double vector = sqrt(pow(x, 2) + pow(y, 2));
	if ((vector <= 1) && ((x >= -1 && y > 0) || (x > 0 && y < 0)))
		return true;
	else
		return false;
}

double f(double x)
{
	if (x <= 3)
		return pow(x, 2) - 3 * x + 9;
	else
		return 1 / (pow(x, 3) + 6);
}