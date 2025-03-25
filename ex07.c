#include <stdio.h>
#include <string.h>


void inverter_string(char str[], int inicio, int fim) {
    if (inicio >= fim) {
        return;
    }

    char temp = str[inicio];
    str[inicio] = str[fim];
    str[fim] = temp;

    inverter_string(str, inicio + 1, fim - 1);
}


int main() {
    char str[100];

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';


    int comprimento = strlen(str);



    inverter_string(str, 0, comprimento - 1);



    printf("A string invertida é: %s\n", str);

    return 0;
}
