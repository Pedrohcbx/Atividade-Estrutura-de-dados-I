#include <stdio.h>
int vp(int a, int b) {
    if (b == 1) return 1;
    if (a % b == 0) return 0;
    return vp(a, b - 1);
}


int main() {
    int n;
    printf("Digite um número: ");
    scanf("%d", &n);


    if (n <= 1) {
        printf("Não é um número primo.\n");
    } else if (vp(n, n/ 2)) {
        printf("É um número primo!\n");
    } else {
        printf("Não é um número primo.");
    }


    return 0;
}
