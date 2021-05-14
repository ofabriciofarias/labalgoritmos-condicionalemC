/*
Estrutura Condicional

Tabela verdade/lógica do OU
a ou b resultado
0    0     0
0    1     1
1    0     1
1    1     1
*/

#include <stdio.h>

/*
//Equivalente em Portugol
ALGORITMO

    DECLARE a, b NUMERICO

    a <- 0
    b <- 1

    SE a = 1 OU b = 1 ENTAO
        ESCREVA "Verdadeiro"
    SENAO ENTAO
        ESCREVA "Falso"

FIM_ALGORITMO

*/

//Equivalente em C

int main(){

    int a, b;

    a = 1; //verdadeiro
    b = 1; //verdadeiro

    if(a == 1 || b == 1){
        printf("Verdadeiro\n");
    }else{
        printf("Falso\n");
    }

    return 0;
}
