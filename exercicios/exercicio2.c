#include <stdio.h>
int main(){
 int num1, num2;
 printf("Digite dois números inteiros: ");
 scanf("%d %d", &num1, &num2);

 if(num1 > num2){
    printf("O número %d é maior que o número %d.\n", num1, num2);
 }else{
    printf("O número %d é maior que o número %d.\n", num2, num1);
 }

 return 0;
}