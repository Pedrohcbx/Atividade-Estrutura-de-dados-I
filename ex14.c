#include <stdio.h>
int CB(int a) {
    if (a == 0) return 0;
    return (a % 2) + 10 * CB(a / 2);

}


int main() {
    int n;

    printf("Digite um n�mero decimal: ");
    scanf("%d", &n);


    if (n == 0) {
        printf("O n�mero em bin�rio �: 0\n");
    } else {
        printf("O n�mero em bin�rio �: %d\n",CB(n));
    }


    return 0;


}
