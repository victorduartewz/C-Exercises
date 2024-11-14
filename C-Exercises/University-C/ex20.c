//ATIVIDADE AVALIATIVA – LINGUAGEM E TECNICAS DE PROGRAMACAO
//Nome: Victor Hugo Borges Duarte
//RA: 5168061
//Atividade: Lista de Exercicios 2 - Exercicio 20

#include <stdio.h>

int main() {
    int numero, maior = 0;

    do {
        printf("Digite um numero inteiro positivo (-1 para sair): ");
        scanf("%d", &numero);

        if (numero > maior && numero != -1) {
            maior = numero;
        }
    } while (numero != -1);

    printf("O maior numero digitado foi: %d\n", maior);

    return 0;
}