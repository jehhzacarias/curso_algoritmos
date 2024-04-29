#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
     
     char nome[50]; 
     float valor, pag;   
     int horas;


     printf("Digite o Nome do funcionario: ");
     fgets(nome, sizeof(nome), stdin);

     printf("Digite o valor que recebe por hora: ");
     scanf("%f", &valor);

     printf("Digite a quantidade de horas trabalhadas: ");
     scanf("%d", &horas);


     pag = valor * horas; 

     printf("O pagamento para %s deve ser %.2f\n", nome, pag);

    return 0; 




}