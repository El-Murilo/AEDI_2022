#include <stdio.h>
#include <conio.h>
int main (void )
{
  int valor;
  
  printf ("Digite um valor de 1 a 5: ");
  scanf("%d", &valor);
  
  if (valor == 1)
    printf ("3, 00\n");
  else
  if (valor == 2)
    printf ("4, 00\n");
  else
  if (valor == 3)
    printf ("2, 80\n");
  else
  if (valor == 4)
  printf ("1, 95\n");
  else
  if (valor == 5)
    printf ("5, 00\n");
    else
    printf("Valor indisponivel");
    
    return 0;
}