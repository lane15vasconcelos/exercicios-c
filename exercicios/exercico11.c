#include <stdio.h>
int main(){
float salario, novoSalario, aumento;
int codigo;

printf("Digite seu  salário atual: ");
scanf("%f", &salario);
printf("Digite o código do cargo: ");
scanf("%d", &codigo);

switch (codigo)
{
case 310:
    novoSalario = (salario * 0.05) + salario;
    aumento = salario * 0.05;
    break;
case 456:
    novoSalario = (salario * 0.075) + salario;
    aumento = salario * 0.075;
    break;
case 885:
    novoSalario = (salario * 0.10) + salario;
    aumento = salario * 0.10;
    break;
default:
    novoSalario = (salario * 0.15) + salario;
    aumento = salario * 0.15;
    break;
}

printf("--------------\n");
printf("Salário antigo: %.2f\n", salario);
printf("--------------\n");
printf("Salário atual: %.2f\n", novoSalario);
printf("--------------\n");
printf("Aumento de: %.2f", aumento);


return 0;

}
