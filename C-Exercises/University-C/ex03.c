//ATIVIDADE AVALIATIVA – LINGUAGEM E TECNICAS DE PROGRAMACAO
//Nome: Victor Hugo Borges Duarte
//RA: 5168061
//Atividade: Lista de Exercicios 2 - Exercicio 3

#include <stdio.h>

int main() {
    int N;
    printf("Informe o valor de N: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        if (i % 7 == 0) {
            printf("%d\n", i);
        }
    }
    return 0;
}
