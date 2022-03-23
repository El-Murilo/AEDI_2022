#include <stdio.h>
int main() {
unsigned short int n, i;
double fatorial = 1;
printf("Digite numero inteiro (nao negativo): ");
scanf("%hu", &n);
for (i = 1; i <= n; i++)
fatorial = fatorial * i;
printf("%hu! = %.0f\n", n, fatorial);
return 0;
}