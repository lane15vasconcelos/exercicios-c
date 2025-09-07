#include <stdio.h>
int main(){
    float celsius;
    printf("Digite a temperatura: ");
    scanf("%f", &celsius);

    if(celsius <= 20.0) {
        printf("A temperatura está baixa, use casaco!");
    }else{
        printf("A temperatura está agradável,não há necessidade de levar casaco!");
    }

    return 0;
}