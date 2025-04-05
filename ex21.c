#include <stdio.h>

void combinar(int arr[], int n, int k, int i, int *comb, int idx) {
    if (idx == k) {
        for (int j = 0; j < k; j++) printf("%d ", comb[j]);
        printf("\n");
        return;
    }
    if (i == n) return;
    comb[idx] = arr[i];
    combinar(arr, n, k, i + 1, comb, idx + 1);
    combinar(arr, n, k, i + 1, comb, idx);
}

int main() {
    int arr[100], n, k, comb[100];
    printf("Digite o tamanho do array: ");
    scanf("%d", &n);
    printf("Digite os elementos do array: ");
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("Digite o valor de k: ");
    scanf("%d", &k);
    combinar(arr, n, k, 0, comb, 0);
    return 0;
}