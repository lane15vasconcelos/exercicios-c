#include <stdio.h>
int main(){
    int ano;
    printf("Digite um ano: ");
    scanf("%d", &ano);

    if (ano % 4 == 0 && ano % 400 == 0) {
        printf("O ano é bissexto.");
    }else{
        printf("O ano não é bissexto");
    }
return 0; 

}