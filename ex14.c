#include <stdio.h>
int CB(int a) {
    if (a == 0) return 0;
    return (a % 2) + 10 * CB(a / 2);

}


int main() {
    int n;

    printf("Digite um número decimal: ");
    scanf("%d", &n);


    if (n == 0) {
        printf("O número em binário é: 0\n");
    } else {
        printf("O número em binário é: %d\n",CB(n));
    }


    return 0;


}
