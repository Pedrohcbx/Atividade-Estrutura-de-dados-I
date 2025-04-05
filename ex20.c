#include <stdio.h>
#include <string.h>

void trocar(char *a, char *b) {
    char t = *a;
    *a = *b;
    *b = t;
}

void permutar(char *str, int l, int r) {
    if (l == r) {
        printf("%s\n", str);
        return;
    }
    for (int i = l; i <= r; i++) {
        trocar(&str[l], &str[i]);
        permutar(str, l + 1, r);
        trocar(&str[l], &str[i]);
    }
}

int main() {
    char str[100];
    printf("Digite a string: ");
    scanf("%s", str);
    permutar(str, 0, strlen(str) - 1);
    return 0;
}