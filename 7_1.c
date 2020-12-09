#include <stdio.h>
int n;

int k(double *a)
{
	int s = 0;

	for (int i = 0; i < n; i++)
	{	
		if (n < 3)
		{
			return s;
		}
			else if (i+2 == n)
			{
				return s;
			}
				else if (a[i] > a[i+1] && a[i+1] > a[i+2])
				{
					s++;
				}
	}
return s;
}

void init(double *a){
printf("\n");

for (int i = 0; i < n; i++) // заповнення масива
{
	printf("a[%d] = ", i);
	scanf("%lf", &a[i]);
}
	printf("\n\n Масив:\n");
	for (int i = 0; i < n; i++) // вивід масива на екран
	{
		printf("\na[%d] = %.2lf", i, a[i]);
	}
}

int main(void) {

	printf("\nРозмір масиву = ");
	scanf("%d", &n);

	double a[n];

	init(a);

	printf("\n\nКількість неперервних ділянок масиву, \nв яких три елементи підряд розміщені по спаданню = %d\n", k(a)); 
	
	return 0;
}
