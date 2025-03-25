#include <stdio.h>




int contar_caracteres(char str[], char c, int index) {
    if (str[index] == '\0') {
        return 0;
    }
        int conta_atual = (str[index] == c) ? 1 : 0;
    return conta_atual + contar_caracteres(str, c, index + 1);
}


int main() {
    char str[100], c;

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);


    str[strcspn(str, "\n")] = '\0';

    printf("Digite o caractere a ser contado: ");
    scanf("%c", &c);


    int resultado = contar_caracteres(str, c, 0);

    printf("O caractere '%c' aparece %d vez(es) na string.\n", c, resultado);

    return 0;
}
