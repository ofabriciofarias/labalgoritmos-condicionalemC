/*
Estrutura condicional

Tabela verdade do E
a E b resultado
0   0   0
0   1   0
1   0   0
1   1   1
*/

/*
ALGORITMO

    DECLARE a, b NUMERICO

    a <- 0
    b <- 0

    SE a = 1 E b = 1 ENTAO
        ESCREVA "Verdadeiro"
    SENAO ENTAO
        ESCREVA "Falso"

FIM_ALGORITMO

*/
#include <stdio.h>

int main(){

    int a, b;

    a = 1;
    b = 1;

    if(a == 1 && b == 1){
        printf("Verdadeiro\n");
    }else{
        printf("Falso\n");
    }

return 0;
}
