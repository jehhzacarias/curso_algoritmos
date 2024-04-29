#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    float A, B, C,qua, tri, tra;

    printf("Digite a medida A: ");
    scanf("%f", &A);    
    printf("Digite a medida B: ");
    scanf("%f", &B); 
    printf("Digite a medida C: ");
    scanf("%f", &C);

    qua = A * A;
    tri = (A*B)/2;
    tra = (A+B)*C/2;

    printf("AREA DO QUADRADO: %.4f\n", qua);
    printf("AREA DO TRIANGULO: %.4f\n", tri);
    printf("AREA DO TRAPEZIO: %.4f\n", tra);

    return 0; 
}