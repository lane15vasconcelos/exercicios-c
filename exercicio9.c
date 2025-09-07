#include <stdio.h>
int main(){
    int a, b, c;
    printf("Digite os valores do triângulo:");
    scanf("%d %d %d", &a, &b, &c);

    if(a < b + c && b < a + c && c < a + b) {
         if (a == b && b == c) {
            printf("O triângulo é equilatero.");
        }else if((a == b && a != c) || (a == c && a != b) || (b == c && b != a)) {
            printf("O triângulo é isósceles");
        }else {
            printf("O triângulo é escaleno");
        }
    }

    return 0;
}