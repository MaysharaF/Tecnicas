#include <stdio.h>

int main(){
    int n;

    printf("Digite um numero: ");
    scanf("%d", n);

    verificar(n);
}

int verificar(int n){
    if(n > 0){
         return 1;
    }
    else if(n == 0){
         return 0;
    }
    else{
        return -1;
    }
}
