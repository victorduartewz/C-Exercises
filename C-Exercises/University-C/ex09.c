//ATIVIDADE AVALIATIVA – LINGUAGEM E TECNICAS DE PROGRAMACAO
//Nome: Victor Hugo Borges Duarte
//RA: 5168061
//Atividade: Lista de Exercicios 2 - Exercicio 9

#include <stdio.h>
#include <math.h>

int main() {
    int N;
    float A = 0.0;
    printf("Informe o valor de N: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        A += sqrt(i);
    }
    printf("O valor de A e: %.2f\n", A);
    return 0;
}
