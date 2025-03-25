#include <stdio.h>
void cr(int n){
    if(n<0){
        return;
            }
            printf("%d\n", n);
            cr(n-1);
}


int main (){
int n;


printf("Digite um numero:\n");
scanf("%d", &n);


cr(n);


    return 0;
}
