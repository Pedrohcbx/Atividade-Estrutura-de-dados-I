#include <stdio.h>

void subconjuntos(int arr[], int n, int i, int *sub, int idx) {
    if (i == n) {
        for (int j = 0; j < idx; j++) printf("%d ", sub[j]);
        printf("\n");
        return;
    }
    sub[idx] = arr[i];
    subconjuntos(arr, n, i + 1, sub, idx + 1);
    subconjuntos(arr, n, i + 1, sub, idx);
}

int main() {
    int arr[100], n, sub[100];
    printf("Digite o tamanho do array: ");
    scanf("%d", &n);
    printf("Digite os elementos do array: ");
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    subconjuntos(arr, n, 0, sub, 0);
    return 0;
}