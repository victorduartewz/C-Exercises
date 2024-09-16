#include <stdio.h>

int main()
{
  
  //escopo global
  int idade;
  printf("Digite sua idade:");
  scanf("%d", &idade);
  
  if(idade < 4){
      printf("Apto para creche");
  }
  
  else if (idade >= 4 && idade <= 7){
      // jard. - escopo thread
      printf("Apto para jardim de infância\n");
  }
  else if(idade > 7 && idade <= 15){
      //fund - escopo local
      printf("Apto para fundamental\n");
  }
  else if (idade > 15 && idade <= 18){
      printf("Apto para o ensino médio");
  }
  else{
      //Valvula de escape
  }
    return 0;
}
