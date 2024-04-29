#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {

    int minutos; 
    float valor; 

    printf("Digite a quantidade de minutos:");
    scanf ("%d", &minutos);

    if (minutos <= 100){
        valor = 50.00;
    }
    else
        valor = (minutos - 100) * 2.00 + 50.00; 

    printf("Valor a pagar: R$ %.2f", valor);

    return 0; 
}