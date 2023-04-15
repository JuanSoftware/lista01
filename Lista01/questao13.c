#include <stdio.h>
#include <stdlib.h>
#include "questao13.h"

void entrada13(int *numero){
    printf("\nInforme um numero: ");
    scanf("%d",numero);
}

void processamento13(int *numero,int *divisivel){
    if (*numero % 5 == 0){
        *divisivel = 1;
    }else{
        *divisivel = 0;
    }
}

void saida13(int numero, int divisivel){
    if (divisivel == 1){
        printf("O numero %d e divisivel por 5!\n",numero);
    }else{
        printf("O numero %d nao e divisivel por 5!\n",numero);
    }
}

void questao13(void){
    int num, div;

    entrada13(&num);

    processamento13(&num,&div);

    saida13(num,div);
    system("pause");
}
