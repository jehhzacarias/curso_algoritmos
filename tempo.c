#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//REFAZER
int main() {

    int ini, fin, dur;

    printf("Hora inicial:");
    scaSnf("%d", &ini);
    printf("Hora final:");
    scanf("%d", &fin);

    //mesmo dia  horario final é maior que o inicial 
    if (fin > ini){
        dur = fin - ini; 
    }

    else
        dur = (24 - ini) + fin;

    printf("O JOGO DUROU %d HORA(S)", dur);

    return 0;
}   
