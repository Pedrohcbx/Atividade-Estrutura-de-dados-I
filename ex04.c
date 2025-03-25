#include <stdio.h>


int pot(int x, int n){
    int calc = 1;
    for (int i = 1; i <= n; i++) {
        calc *= x;
    }
    return calc;
}




int main() {
   int x, n, r;

    printf("Digite um número e um expoente para saber seu resultado;");
    scanf("%d %d", &x, &n);

    r = pot(x,n);


    printf("o resultado é: %d", r);
    return 0;
}
