#include <stdio.h>
int main(){
    int numero;
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

if(numero > 0) {
    printf("O número %d é positivo", numero);
}else if(numero < 0) {
    printf("O número %d é negativo", numero);
}else {
    printf("O número é zero", numero);
}
return 0;
    
}