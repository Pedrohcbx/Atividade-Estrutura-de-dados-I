#include <stdio.h>


int mult(int a, int b){
    if (b == 0){
        return 0;
    }

    return a + mult (a, b - 1);
}


int main (){

    int a, b;

    printf("Digite o primeiro n�mero:");
    scanf("%i", &a);
    printf("Digite o segundo n�mero:");
    scanf("%i", &b);

    printf("Resultado �:%i", mult(a,b));

    return 0;
}
