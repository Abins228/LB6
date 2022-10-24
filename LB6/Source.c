#include <stdio.h>
#include <locale.h>


void main() {
	setlocale(LC_ALL, "RUS");
	puts("Задание 1");
	int yeas;
	float o,s,f;
	puts("Введите год:");
	scanf("%d", &yeas);
	o = yeas % 4;
	s = yeas % 100;
	f = yeas % 400;
	if (o == 0 && s!=0 || f==0 )
	{
		printf("Год %d високосный\n", yeas);
	}
	else
	{
		printf("Год %d не високосный\n", yeas);
	}
	puts("Задание 2");
	float x,t;
	scanf("%f", &x);
	t = x <= 1 ? 0 : 1 / (x + 6);
	printf("F(%1.0f)=%1.3f\n", x, t);
	puts("Задание 3");
	int year,v;
	puts("Введите год рождения:");
	scanf("%d", &year);
	v = 2022 - year;
	printf("%d лет, %d год\n", v, year);

}
