#include <stdio.h>

int particionar(int arr[], int baixo, int alto) {
    int p = arr[alto], i = baixo - 1, t;
    for (int j = baixo; j < alto; j++) {
        if (arr[j] < p) {
            i++;
            t = arr[i]; arr[i] = arr[j]; arr[j] = t;
        }
    }
    t = arr[i + 1]; arr[i + 1] = arr[alto]; arr[alto] = t;
    return i + 1;
}

void quickSort(int arr[], int baixo, int alto) {
    if (baixo < alto) {
        int pi = particionar(arr, baixo, alto);
        quickSort(arr, baixo, pi - 1);
        quickSort(arr, pi + 1, alto);
    }
}

int main() {
    int arr[100], n;
    printf("Digite o tamanho do array: ");
    scanf("%d", &n);
    printf("Digite os elementos do array: ");
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    quickSort(arr, 0, n - 1);
    printf("Array ordenado: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    return 0;
}