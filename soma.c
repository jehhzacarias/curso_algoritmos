#include <stdio.h>
#include <stdlib.h>

int main() {

    int SOMA, X, Y ;
    X = 0; Y = 0;

    printf("Digite o valor de X:");
    scanf("%d", &X);
    printf("Digite o valor de Y:");
    scanf("%d", &Y);
    SOMA = X + Y;
    printf("SOMA = %d\n", SOMA);

    return 0;

}