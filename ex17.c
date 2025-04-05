#include <stdio.h>

int buscar(int arr[], int n, int x) {
    if (n == 0) {
        return 0;
    }
    if (arr[n - 1] == x) {
        return 1;
    }
    return buscar(arr, n - 1, x);
}

int main() {
    int n, x;
    printf("Digite o tamanho do array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Digite os elementos do array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Digite o número a ser buscado: ");
    scanf("%d", &x);
    int resultado = buscar(arr, n, x);
    printf("Resultado da busca: %d\n", resultado);
    return 0;
}