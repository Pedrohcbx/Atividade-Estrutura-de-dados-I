#include <stdio.h>

int resolver(int lab[10][10], int sol[10][10], int n, int m, int x, int y) {
    if (x == n - 1 && y == m - 1) {
        sol[x][y] = 1;
        return 1;
    }
    if (x >= 0 && y >= 0 && x < n && y < m && lab[x][y] == 0) {
        sol[x][y] = 1;
        if (resolver(lab, sol, n, m, x + 1, y)) return 1;
        if (resolver(lab, sol, n, m, x, y + 1)) return 1;
        sol[x][y] = 0;
    }
    return 0;
}

int main() {
    int n, m, lab[10][10], sol[10][10] = {0};
    printf("Digite as dimensões do labirinto: ");
    scanf("%d %d", &n, &m);
    printf("Digite a matriz do labirinto (0 caminho, 1 parede):\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &lab[i][j]);
    if (resolver(lab, sol, n, m, 0, 0)) {
        printf("Caminho encontrado:\n");
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) printf("%c ", sol[i][j] ? '*' : '0');
            printf("\n");
        }
    } else {
        printf("Nenhum caminho encontrado.\n");
    }
    return 0;
}