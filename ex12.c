#include <stdio.h>


int soma(int a[], int n){
    if (n==0){
        return 0;
    }
    return a[n - 1] + soma(a, n - 1);

}


int main(){
    int a[] = {1,1,1,1,2};
    int n = 5;

printf("a soma das array é: %d", soma(a,n));


return 0;

}
