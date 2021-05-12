/*
Programa do valor ou impar
*/
#include <stdio.h>

int main(){//ALGORITMO

    int a; //DECLARE a NUMERICO

    scanf("%d", &a); //LEIA a

    //SE RESTO(a/2) = 0 ENTAO
        //ESCREVA "O valor eh par"
    //SENAO
        //ESCREVA "O valor eh impar"
    if((a%2) == 0)
        printf("O valor eh par\n");
    else
        printf("O valor eh impar\n");

    return 0;
} //FIM_ALGORITMO
