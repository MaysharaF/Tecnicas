#include <stdio.h>

void dobro(int n){
    n *= n;
    printf("%d", n);
}

int main(){
    int n = 2;
    dobro(n);

}
