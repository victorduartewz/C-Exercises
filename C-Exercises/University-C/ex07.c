//ATIVIDADE AVALIATIVA – LINGUAGEM E TECNICAS DE PROGRAMACAO
//Nome: Victor Hugo Borges Duarte
//RA: 5168061
//Atividade: Lista de Exercicios 2 - Exercicio 7

#include <stdio.h>

int main() {
    int N, soma = 0;
    printf("Informe o valor de N: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        soma += i * 10 + i;
    }
    printf("Somatorio 1 + 22 + 33 + ... + NN para N = %d e: %d\n", N, soma);
    return 0;
}
