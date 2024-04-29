#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    float distancia, combustivel, medio;

    printf("Distancia pecorrida:");
    scanf("%f", &distancia);


    printf("Combustivel gasto: ");
    scanf("%f", &combustivel);

    medio = distancia/combustivel;

    printf("Consumo medio: %.2f", medio);

    return 0; 



}