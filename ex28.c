#include <stdio.h>

int seguro(int tab[10][10], int r, int c, int n) {
    for (int i = 0; i < r; i++) if (tab[i][c]) return 0;
    for (int i = r - 1, j = c - 1; i >= 0 && j >= 0; i--, j--) if (tab[i][j]) return 0;
    for (int i = r - 1, j = c + 1; i >= 0 && j < n; i--, j++) if (tab[i][j]) return 0;
    return 1;
}

void nRainhas(int tab[10][10], int r, int n) {
    if (r == n) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) printf("%c ", tab[i][j] ? 'Q' : '.');
            printf("\n");
        }
        printf("\n");
        return;
    }
    for (int c = 0; c < n; c++) {
        if (seguro(tab, r, c, n)) {
            tab[r][c] = 1;
            nRainhas(tab, r + 1, n);
            tab[r][c] = 0;
        }
    }
}

int main() {
    int n, tab[10][10] = {0};
    printf("Digite o valor de N: ");
    scanf("%d", &n);
    nRainhas(tab, 0, n);
    return 0;
}