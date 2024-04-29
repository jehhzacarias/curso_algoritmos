#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char temperatura;
    float C,F;

    printf("Voce vai digitar a temperatura em qual escala (C/F)? ");
    scanf("%c",&temperatura );


    if (temperatura == 'F'){
        printf("Digite a temperatura em Fahrenheit: ");
        scanf("%f", &F);

        C = (5.0/9) * (F -32);
        printf("Temperatura equivalente em Celsius: %.2f", C);


    }

        else {
            printf("Digite a temperatura em Celsius: ");
            scanf("%f", &C);

            F = 9*C /5+32;
            printf("Temperatura equivalente em Fahrenheit: %.2f", F);

        }


return 0;



}