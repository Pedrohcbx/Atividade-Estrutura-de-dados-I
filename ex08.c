#include <stdio.h>
#include <string.h>


int vp(char str[], int inicio, int fim) {
    if (inicio >= fim) return 1;
    if (str[inicio] != str[fim]) return 0;
    return vp(str, inicio + 1, fim - 1);
}


int main() {
    char str[100];


    printf("Digite uma string: ");
    scanf("%s", str);


    if (vp(str, 0, strlen(str) - 1)) {
        printf(" � um pal�ndromo!\n");
    } else {
        printf(" n�o � um pal�ndromo.\n");
    }


    return 0;
}
