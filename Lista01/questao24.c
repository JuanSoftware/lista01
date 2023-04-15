#include <stdio.h>
#include <stdlib.h>
#include "questao24.h"


void entrada24(int *compra,int *pagamento){
    printf("Informe o valor da compra: R$");
    scanf("%d",compra);
    printf("Agora, informe o valor do pagamento: R$");
    scanf("%d",pagamento);
}

void processamento24(int *compra, int *pagamento, int *n1, int *n10, int *n100){
    if (*compra < *pagamento){
        *pagamento = *pagamento - *compra;
        *n100 = *pagamento / 100;
        *pagamento = *pagamento % 100;
        *n10 = *pagamento /10;
        *pagamento = *pagamento % 10;
        *n1 = *pagamento;
    }else if (*compra > *pagamento){
        printf("Pagamento negado!\n");
    }else{
        printf("Troco desnecesario!\n ");
    }

}

void questao24(void){
    int total, pag, notas1,notas10,notas100;
    notas1 = 0;
    notas10 = 0;
    notas100 = 0;


    entrada24(&total,&pag);


    processamento24(&total,&pag,&notas1,&notas10,&notas100);

    printf("O troco sera de %d notas de R$100, %d notas de R$10 e %d notas de R$1\n",notas100, notas10, notas1);
    system("pause");
}
