/*
Crie uma calculadora que apresente o resultado
de uma das 4 operacoes matematicas basicas, que deve ser escolhida como opcao pelo usuario

*/

#include <stdio.h>


int main(){ //ALGORITMO

    //DECLARE op, a, b, r NUMERICO
    int op;
    float a, b, r;

    //ESCREVA "Digite sua opcao. 1 - Soma, 2 - Subtracao, 3 - Multiplicacao, 4 - Divisao"
    printf("Digite sua opcao\n1 - Soma\n2 - Subtracao\n3 - Multiplicacao\n4 - Divisao\n");
    //LEIA op
    scanf("%d", &op);

    /*
    SE op = 1 ENTAO
    INICIO
        LEIA a, b
        r <- a + b
        ESCREVA "Soma = ", r
    FIM
        SENAO SE op = 2 ENTAO
        INICIO
            LEIA a, b
            r <- a - b
            ESCREVA "Subtracao = ", r
        FIM
        SENAO SE op = 3 ENTAO
        INICIO
            LEIA a, b
            r <- a * b
            ESCREVE "Multiplicacao = ", r
        FIM
        SENAO SE op = 4 ENTAO
        INICIO
            LEIA a, b
            SE b = 0 ENTAO
                ESCREVA "Impossivel realizar a divisao"
            SENAO ENTAO
            INICIO
                r <- a/b
                ESCREVA "Divisao = ", r
            FIM
        FIM
        SENAO ENTAO
            Escreva "ERRO: Opcao Invalida"
    */
    if (op == 1)
    {
        scanf("%f%f",&a, &b);
        r = a + b;
        printf("Soma = %.2f\n", r);
    }else if (op == 2)
    {
        scanf("%f%f", &a, &b);
        r = a - b;
        printf("Subtracao = %.2f\n", r);
    }else if(op == 3)
    {
        scanf("%f%f", &a, &b);
        r = a * b;
        printf("Multiplicacao = %.2f\n", r);
    }else if(op == 4)
    {
        scanf("%f%f", &a, &b);
        if(b == 0)
            printf("Impossivel realizar a divisao\n");
        else
        {
            r = a/b;
            printf("Divisao = %.2f\n", r);
        }
    }else
        printf("ERRO: Opcao Invalida\n");
    return 0;
}//FIM_ALGORITMO
