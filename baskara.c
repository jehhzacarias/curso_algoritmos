#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {

    float a, b, c, delta;
    float x1, x2; 

    printf("Coeficiente a: ");
    scanf("%f",&a);


    printf("Coeficiente b: ");
    scanf("%f",&b);    

    
    printf("Coeficiente c: ");
    scanf("%f",&c);

    delta = (b*b) - 4*a*c;

    //a não pode ser zero e delta não pode ser negativo
     if (a == 0 || delta < 0) {
        printf("Esta equacao nao possui raizes reais\n");
    }
    // Se delta é zero ou positivo, calcular as raízes
    else {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);

        printf("As raizes sao: x1 = %.4f e x2 = %.4f\n", x1, x2);
    }

    return 0;



}