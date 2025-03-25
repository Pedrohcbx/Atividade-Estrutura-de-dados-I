#include <stdio.h>
int vp(int a, int b) {
    if (b == 1) return 1;
    if (a % b == 0) return 0;
    return vp(a, b - 1);
}


int main() {
    int n;
    printf("Digite um n�mero: ");
    scanf("%d", &n);


    if (n <= 1) {
        printf("N�o � um n�mero primo.\n");
    } else if (vp(n, n/ 2)) {
        printf("� um n�mero primo!\n");
    } else {
        printf("N�o � um n�mero primo.");
    }


    return 0;
}
