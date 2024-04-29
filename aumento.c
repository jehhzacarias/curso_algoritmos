#include <stdio.h>

int main() {
    float salario, novo, aumento, porcentagem;

    printf("Digite o salario da pessoa: ");
    scanf("%f", &salario);

    if (salario <= 1000.00) {
        porcentagem = 20.0 / 100.0;
    } else if (salario <= 3000.00) {
        porcentagem = 15.0 / 100.0;
    } else if (salario <= 8000.00) {
        porcentagem = 10.0 / 100.0;
    } else {
        porcentagem = 5.0 / 100.0;
    }

    aumento = salario * porcentagem;
    novo = salario + aumento;

    printf("Novo salario = R$ %.2f\n", novo);
    printf("Aumento = R$ %.2f\n", aumento);
    printf("Porcentagem = %.2f %%\n", porcentagem * 100.0);

    return 0;
}
