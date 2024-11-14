//ATIVIDADE AVALIATIVA – LINGUAGEM E TECNICAS DE PROGRAMACAO
//Nome: Victor Hugo Borges Duarte
//RA: 5168061
//Atividade: Lista de Exercicios 2 - Exercicio 6

#include <stdio.h>

int main() {
    int a, b, s = 0;
    printf("Informe o valor de M: ");
    scanf("%d", &a);
    printf("Informe o valor de N: ");
    scanf("%d", &b);

    for (int i = a; i <= b; i++) {
        if (i % 2 != 0) {
            s += i;
        }
    }
    printf("Soma dos numeros impares entre %d e %d: %d\n", a, b, s);
    return 0;
}
