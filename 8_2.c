#include <stdio.h>

double fact(int n) {
if (n<=1) return 1;
return (fact(n-1)*n); }

int main(void)
{

double a1=fact(2)*fact(2);
double a2=fact(4)/a1;
double a3=fact(48);
double a4=fact(10)*fact(38);
double a5=a3/a4;
double a6=a2*a5;

printf("Існує %.0f способів\n", a6);

    return 0;
}