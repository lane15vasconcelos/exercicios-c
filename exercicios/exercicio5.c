#include <stdio.h>
int main(){
    int numero;
    printf("Digite um número de 1 a 7: ");
    scanf("%d", &numero);

    switch (numero)
    {
    case 1: 
       printf("Hoje é Domingo.");
        break;
    case 2:
     printf("Hoje é Segunda-Feira.");
        break;
    case 3:
     printf("Hoje é Terça-Feira.");
        break;
    case 4:
     printf("Hoje é Quarta-Feira.");
        break;
    case 5:
     printf("Hoje é Quinta-Feira.");
        break;
    case 6:
     printf("Hoje é Sexta-Feira.");
        break;
    case 7:
     printf("Hoje é Sábado.");
        break;
    default:
     printf("Opção inválida!"); 
        break;
    }

return 0; 

}