#include <stdio.h>
#include <locale.h>


void main() {
	setlocale(LC_ALL, "RUS");
	puts("������� 1");
	int yeas;
	float o,s,f;
	puts("������� ���:");
	scanf("%d", &yeas);
	o = yeas % 4;
	s = yeas % 100;
	f = yeas % 400;
	if (o == 0 && s!=0 || f==0 )
	{
		printf("��� %d ����������\n", yeas);
	}
	else
	{
		printf("��� %d �� ����������\n", yeas);
	}
	puts("������� 2");
	float x,t;
	scanf("%f", &x);
	t = x <= 1 ? 0 : 1 / (x + 6);
	printf("F(%1.0f)=%1.3f\n", x, t);
	puts("������� 3");
	int year,v;
	puts("������� ��� ��������:");
	scanf("%d", &year);
	v = 2022 - year;
	printf("%d ���, %d ���\n", v, year);

}
