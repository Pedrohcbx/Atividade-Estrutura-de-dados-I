#include <stdio.h>

int caminhos(int x1, int y1, int x2, int y2) {
    if (x1 > x2 || y1 > y2) return 0;
    if (x1 == x2 && y1 == y2) return 1;
    return caminhos(x1 + 1, y1, x2, y2) + caminhos(x1, y1 + 1, x2, y2);
}

int main() {
    int x2, y2;
    printf("Digite as coordenadas finais (x y): ");
    scanf("%d %d", &x2, &y2);
    printf("Total de caminhos: %d\n", caminhos(0, 0, x2, y2));
    return 0;
}