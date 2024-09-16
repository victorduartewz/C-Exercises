#include <stdio.h>

int main()
{

int idade;

while (1)
{
  printf("Digite a idade do nadador para classificarmos na sua devida categoria:\n");
  scanf("%d", &idade);
    break;
if(idade >= 18){
    printf("Adulto\n");
}
if (idade >= 14 && idade <18){
    printf("Juvenil\n");
}
if (idade >= 9 && idade < 14){
  printf("Infantil\n");
}
if (idade < 9){

  printf("Mirim\n");
}
  
}
  return 0;
}