#include <stdio.h>

int main(){ //ALGORITMO

    int var1, var2, resultado;

    printf("Digite o valor das variaveis 1 e 2:\n");
    scanf("%d%d", &var1, &var2);

    printf("Os valores digitados sao:\n");
    printf("var1 = %d\n", var1);
    printf("var2 = %d\n", var2);

    //Estrutura condicional
    /*
    SE var1 = 10 ENTAO
     INICIO
        comando1
        comando2
     FIM
    */
    if(var1 == 10) //ENTAO
    {//INICIO
        printf("O valor de var1 = %d\n", var1);
        printf("Entramos na condicional, pois escolhemos o valor igual ao da condicao\n");
    }//FIM_IF

    return 0;
} //FIM_ALGORITMO
