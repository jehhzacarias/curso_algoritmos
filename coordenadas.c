#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    float X,Y;
    int Q1,Q2,Q3,Q4;

    printf("Valoe de X:");
    scanf("%f",&X);

    printf("Valoe de Y:");
    scanf("%f",&Y);
    if(X > 0 && Y > 0){
        printf("Q1");
    }
    else if (X<0 && Y<0)
    {
        printf("Q3");
    }
    else if (X<0 && Y>0)
    {
        printf("Q2");
    }
    else if (X>0 && Y<0){ 
        printf("Q4");}

    else if (X ==0 && Y==0){
        printf("Origem");
    
    }

     else if (X ==0 && Y==0){
        printf("Origem");
    
    }
     else if (X ==0){
        printf("Eixo Y");
    }

     else if (Y ==0){
        printf("Eixo X");
    }
    return 0;
}