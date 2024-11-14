//ATIVIDADE AVALIATIVA – LINGUAGEM E TECNICAS DE PROGRAMACAO
//Nome: Victor Hugo Borges Duarte
//RA: 5168061
//Atividade: Lista de Exercicios 2 - Exercicio 8

#include <stdio.h>

int main() {
    int N, fatorial = 1;
    printf("Informe um numero inteiro nao negativo: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        fatorial *= i;
    }
    printf("Fatorial de %d e: %d\n", N, fatorial);
    return 0;
}
