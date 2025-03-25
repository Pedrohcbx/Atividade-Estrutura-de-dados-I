#include <stdio.h>


int mult(int a, int b){
    if (b == 0){
        return 0;
    }

    return a + mult (a, b - 1);
}


int main (){

    int a, b;

    printf("Digite o primeiro número:");
    scanf("%i", &a);
    printf("Digite o segundo número:");
    scanf("%i", &b);

    printf("Resultado é:%i", mult(a,b));

    return 0;
}
