#include <stdio.h>


int n_par(int n, int par){
   if( par > n){
       return par;
   }
   if(par % 2 == 0){
       printf("%d", par);
   }
  n_par(n, par +1);
 }




int main() {
    int n;


    printf("Digite um número: ");
    scanf("%d", &n);


    printf("Números pares de 0 até %d: ", n);
    n_par(n, 0);


    return 0;
}
