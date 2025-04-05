#include <stdio.h>

void gerar(char *s, int abertos, int fechados, int n, int idx) {
    if (abertos == n && fechados == n) {
        s[idx] = '\0';
        printf("%s\n", s);
        return;
    }
    if (abertos < n) {
        s[idx] = '(';
        gerar(s, abertos + 1, fechados, n, idx + 1);
    }
    if (fechados < abertos) {
        s[idx] = ')';
        gerar(s, abertos, fechados + 1, n, idx + 1);
    }
}

int main() {
    int n;
    char s[100];
    printf("Digite o número de pares de parênteses: ");
    scanf("%d", &n);
    gerar(s, 0, 0, n, 0);
    return 0;
} // Vai Palmeiras!