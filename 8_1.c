#include <stdio.h>

int n = 0;

int dob(int n)
{
  if (n < 10) return n;
  return n % 10 * dob(n / 10);
}

int main(void)
{

    printf("\r\nВведіть натуральне число:\r\nn = ");
        scanf("%d", &n);

    if (n < 0) n = -n;
        printf("\r\nДобуток цифр цього числа: %d\r\n", dob(n));

    return 0;
}