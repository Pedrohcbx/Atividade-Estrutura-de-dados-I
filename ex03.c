#include <stdio.h>
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}


int main() {
    int n;
    printf("Digite o valor de n: ");
    scanf("%d", &n);


    printf("O %d-�simo termo da sequ�ncia de Fibonacci �: %d\n", n, fibonacci(n));


    return 0;
}
