
#include <stdio.h>

int main() {
    int n;
    float x, soma = 0;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
    {
        scanf("%f", &x);
          soma += x;

    }

    printf("A soma é = %f e a media é = %f",soma, soma/n);
}


