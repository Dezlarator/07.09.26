#include <locale.h>
#include <stdio.h>

int task1()
{
	setlocale(LC_ALL, "Russian");
	printf("123\n"); // подзадание 1
	puts("\n");
	printf("1\n2\n3\n");
	puts("\n");
	printf("\t1\n\t\t2\n\t\t\t3\n");
	puts("\n");
	printf("%d\n", 1);
	printf("%d\n", 2);
	printf("%d\n", 3);
	printf("%d\n", 4);
	printf("%10.3f\n", 12.234657);
	printf("%10.5f\n", 12.234657);
	printf("Остаток от деления %d на %d равен %d\n ", 5, 2, 5 % 2);
	printf("7 / 5 = %.2f\n", 7.0 / 5);
	printf("2000 * 4 = %d\n", 2000 * 4);\
	printf("%g разделить %e равно %f\n ", 5., 2000000., 5. / 2000000);

}
int task2()
{
	setlocale(LC_ALL, "Russian");
	int N =11;
	int sec = 3;
	int K = 25;
	int p = 12 - N;
	int y = 60 - K;
	float o = (float)N/ 24;
	float t = (float)K/ 60;
	printf("сейчас %d часов %d минут %d секунд\n", N, K,sec);
	printf("сейчас %d минута суток\n", K +11*60);
	printf("до полуночи осталось %d часов и %d минут \n", 11+p, y);
	printf("c 8 прошло %d секунд \n", N*60*60 + K*60);
	printf("«Текущий час = %.2f суток  и текущая минута = %.2f часа»\n",o,t);
}
int task3()
{
	int C = 3;
	int Q = 333;
	float res = (float)C / (float)Q;
	setlocale(LC_CTYPE, "Russian");
	printf("Дано:\n");
	printf("        %d\n", C);
	printf("      %d\n", Q);
	printf("-------\n");
	printf("Ответ:\n");
	printf("      %07.3f", res);
}
int main()
{
	task1();
	printf("\n");
	task2();
	printf("\n");
	task3();
	return 0;

}