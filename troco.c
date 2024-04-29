#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float preco_unit, valor, troco, pagar,resto; 
    int quant; 

    printf("Preco unitario do produto: ");
    scanf ("%f",&preco_unit);

    printf("Quantidade comprada: ");
    scanf("%d", &quant);

    printf("Dinheiro recebido: ");
    scanf("%f", &valor);

    //pagar = preco_unit*quant;

    if (valor >= preco_unit*quant){
        troco =  valor - preco_unit*quant; 
        printf("TROCO = %.2f", troco);
    }
    
    else 
    //if(valor < pagar)
    {
        resto =  preco_unit*quant - valor;
        printf("DINHEIRO INSUFICIENTE. FALTAM = %.2f REAIS", resto);
 
    }


    
    return 0;




}