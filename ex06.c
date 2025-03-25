#include <stdio.h>

int soma_digitos(int n) {
    if (n == 0) {
        return 0;
    }
    return (n % 10) + soma_digitos(n / 10);
}


int main() {
    int n;


    printf("Digite um n�mero: ");
    scanf("%d", &n);


    int resultado = soma_digitos(n);


    printf("A soma dos d�gitos de %d �: %d\n", n, resultado);

    return 0;
}
