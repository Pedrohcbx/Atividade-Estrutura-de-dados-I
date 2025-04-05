#include <stdio.h>

int buscaBinaria(int arr[], int l, int r, int x) {
    if (l > r) return -1;
    int m = (l + r) / 2;
    if (arr[m] == x) return m;
    if (arr[m] > x) return buscaBinaria(arr, l, m - 1, x);
    return buscaBinaria(arr, m + 1, r, x);
}

int main() {
    int arr[100], n, x;
    printf("Digite o tamanho do array: ");
    scanf("%d", &n);
    printf("Digite os elementos ordenados do array: ");
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("Digite o elemento a ser buscado: ");
    scanf("%d", &x);
    printf("Índice do elemento: %d\n", buscaBinaria(arr, 0, n - 1, x));
    return 0;
}