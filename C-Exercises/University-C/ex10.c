//ATIVIDADE AVALIATIVA – LINGUAGEM E TECNICAS DE PROGRAMACAO
//Nome: Victor Hugo Borges Duarte
//RA: 5168061
//Atividade: Lista de Exercicios 2 - Exercicio 10

#include <stdio.h>

int main() {
    int valor, quantidade = 0;

    printf("Digite um valor (0 para encerrar): ");
    scanf("%d", &valor);

    while (valor != 0) {
        quantidade++;
        printf("Digite outro valor (0 para encerrar): ");
        scanf("%d", &valor);
    }

    printf("Quantidade de numeros lidos: %d\n", quantidade);
    return 0;
}
