#include <stdio.h>
int main(){
    int a, b, c;
    printf("Digite três numeros inteiros: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a < b && a < c) {
        printf("O menor número é: %d", a);
    }else if(b < a && b < c) {
        printf("O menor número é: %d", b);
    }else {
        printf("O menor número é: %d", c);
    }
return 0; 

}
