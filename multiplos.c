#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n1, n2;    

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &n1, &n2);

        if (n1 != 0 && n2 != 0 && (n1 % n2 == 0 || n2 % n1 == 0)) {


        printf("sao multiplos");
     }
     else {
        printf("Nao sao multiplos");
     }

    return 0;


}