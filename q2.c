#include <stdio.h>
 
int main(void)
{
    float c, f;
 
    printf("Informe a temperatura de F = "); scanf("%f", &f);
 
    c = (f - 32) * 5 / 9;
 
    printf("C = %f", c);
 
    return(0);
}