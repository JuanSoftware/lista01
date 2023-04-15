#include <stdio.h>
#include <stdlib.h>
#include "questao17.h"

void entrada17(float *preco){
    printf("\nInforme o valor de compra: R$");
    scanf("%f",preco);
}

void processamento17(float *preco,int *lucro){
    printf("Calculando...\n\n");
    if (*preco >= 200){
        *preco = *preco * 1.3;
        *lucro = 30;
    }else{
        *preco = *preco * 1.5;
        *lucro = 50;
    }
}

void saida17(float preco, int lucro){
    printf("O preco de venda deve ser de R$%.2f, tendo %d%% de lucro em relacao ao preco de compra\n",preco,lucro);
}

void questao17(void){
    float valor;
    int porc;

    entrada17(&valor);

    processamento17(&valor,&porc);

    saida17(valor, porc);
    system("pause");
}
