#include <stdio.h>
#include <time.h>
const int Low = -100, High = 100;
int n;


void init(int *a){
srand((unsigned)time(0));
printf("\n");
	for (int i = 0; i < n; i++) // заповнення масива
	{
		a[i] = Low + rand() % (High - Low + 1); 
	}
}

void print(int *a){
	printf("\n Масив:\n");
	for (int i = 0; i < n; i++) // вивід масива на екран
	{
		printf("\na[%d] = %d", i, a[i]);
	}
	printf("\n");
}

int bil_5(int *a){
int k = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > 5)
		{
			k++;
		}
	}
	return k;
}

int summ(int *a){
	int max = a[0];
	int max_index = 0;
	int summ = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] >= max)
		{
			max = a[i];
			max_index = i+1;
		}
	}

	for (int i = max_index; i < n; i++)
	{
		summ += a[i];
	}
	return summ;
}

int main(void) {
do{
	printf("\nРозмір масиву = ");
	scanf("%d", &n);
}while(n<1);

	int a[n];

	init(a);
	print(a);

	printf("\n1) Кількість елементів масиву, більших за число п’ять: %d", bil_5(a));
	printf("\n2) Сума елементів масиву, розташованих після максимального елемента: %d\n", summ(a));
	return 0;
}