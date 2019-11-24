#include <stdio.h>
#include <string.h>


void data(int dia, int mes, int ano){
    char m[20];

    if(mes == 11){
        m[20] = 'Novembro';
    }

    printf("%d  %s  %d", dia, m[20], ano);
}


int main(){
    int dia, mes, ano;

    printf("Dia: ");
    scanf("%d", &dia);
    printf("Mes: ");
    scanf("%d", &mes);
    printf("Ano: ");
    scanf("%d", &ano);

    data(dia,mes,ano);
}
