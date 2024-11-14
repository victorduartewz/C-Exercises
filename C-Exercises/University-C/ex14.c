//ATIVIDADE AVALIATIVA – LINGUAGEM E TECNICAS DE PROGRAMACAO
//Nome: Victor Hugo Borges Duarte
//RA: 5168061
//Atividade: Lista de Exercicios 2 - Exercicio 14

#include <stdio.h>
#include <math.h>

int main(){
    int expoente, i = 0, soma = 0;
    
    printf("Informe um numero para ser o ultimo expoente: ");
    scanf("%d", &expoente);
    
    while(i <= expoente){
        soma += pow(3, i);
        i++;
    }
    
    printf("O somatorio da serie e: %d", soma);
    
    return 0;
}