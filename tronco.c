#include <stdio.h>
#include <stdlib.h>

int main() {

float preco, recebido, TROCO;
int quant;
preco = 0.0; recebido =0.0; TROCO = 0.0;

printf("Preco unitario do produto:");
scanf("%f", &preco);

printf("Quantidade comprada:");
scanf("%d", &quant);

printf("Dinheiro recebido: ");
scanf("%f",&recebido);

TROCO = recebido - (preco * quant);

printf("TRONCO = %.2f\n", TROCO);
return 0;

}

