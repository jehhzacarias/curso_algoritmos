#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() { 

  float d1, d2, d3, maior;

printf("Digite as tres distancias: ");
scanf("%f %f %f", &d1, &d2, &d3);

    if(d1 > d2 && d1>d3){
        maior = d1;
        printf("MAIOR DISTANCIA = %f",maior );
    }

    else if(d2 > d3){
        maior = d2;
        printf("MAIOR DISTANCIA= %f", maior);
    }
    else{
        maior = d3;
        printf("MAIOR DISTANCIA= %f", maior);

    }

    return 0; 
}