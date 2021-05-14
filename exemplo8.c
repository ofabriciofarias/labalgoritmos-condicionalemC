#include <stdio.h>
#include <stdbool.h>

int main(){

    bool a, b;

    a = true; //ou recebera o valor false
    b = true; //ou recebera o valor false

    if(!(a == true && b == true)){
        printf("Saida igual a verdadeiro\n");
    }else{
        printf("Saida igual a falso\n");
    }

return 0;
}
