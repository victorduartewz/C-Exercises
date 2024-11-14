//ATIVIDADE AVALIATIVA – LINGUAGEM E TECNICAS DE PROGRAMACAO
//Nome: Victor Hugo Borges Duarte
//RA: 5168061
//Atividade: Lista de Exercicios 2 - Exercicio 11

#include <stdio.h>

int main() {
    
    const float pi = 3.14159;
    float raio = -1, circuferencia;
    
    printf("Insira o raio do circulo: ");

    
    while(raio < 0){
        scanf("%f", &raio);
        if(raio < 0){
            printf("O raio não pode ser negativo. Tente novamente: \n");
        }
    }
    
    circuferencia = 2 * pi * raio;
    
    printf("A circuferencia do circulo e: %.2f", circuferencia);
    
    return 0;
}