#include <stdio.h>

void imprimir_impar(int n, int impar) {
    if (impar > n) {
        return;
    }
    if (impar % 2 == 1) {
        printf("%d ", impar);
    }
    imprimir_impar(n, impar + 1);
}

int main() {
    int n;
    printf("Digite um n�mero: ");
    scanf("%d", &n);
    printf("N�meros �mpares de 1 at� %d: ", n);
    imprimir_impar(n, 1);
    return 0;
}