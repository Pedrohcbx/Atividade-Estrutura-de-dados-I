#include <stdio.h>

int expo(int x, int n) {
    if (n == 0) return 1;
    int y = expo(x, n / 2);
    if (n % 2 == 0) return y * y;
    return x * y * y;
}

int main() {
    int x, n;
    printf("Digite a base e o expoente: ");
    scanf("%d %d", &x, &n);
    printf("Resultado: %d\n", expo(x, n));
    return 0;
}