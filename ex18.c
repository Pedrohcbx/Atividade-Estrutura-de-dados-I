#include <stdio.h>

int comprimento(char *s) {
    if (*s == '\0') return 0;
    return 1 + comprimento(s + 1);
}

int main() {
    char s[100];
    printf("Digite uma string: ");
    scanf("%s", s);
    printf("Comprimento: %d\n", comprimento(s));
    return 0;
}