#include <stdio.h>




int mdc(int a, int b) {
    if (b == 0) {
        return a;
    }
    return mdc(b, a % b);
}


int main() {
    int a, b;



    printf("Digite dois n�meros inteiros: ");
    scanf("%d %d", &a, &b);

    int resultado = mdc(a, b);

    printf("O MDC de %d e %d �: %d\n", a, b, resultado);

    return 0;
}
