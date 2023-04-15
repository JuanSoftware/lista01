#include <stdio.h>
#include <stdlib.h>
#include "questao22.h"

void entrada22(int *habitantes, int *vencedor){
    printf("Informe o numero de eleitores do municipio: ");
    scanf("%d",habitantes);
    printf("Informe o numero de votos do candidato mais votado: ");
    scanf("%d",vencedor);
}

void processamento22(int *habitantes, int *vencedor, int *segundo){
    if (*vencedor >= (*habitantes /2.0)){
        *segundo = 1;
    }else{
        *segundo = 0;
    }
}

void saida22(int segundo){
    if (segundo == 1){
        printf("\nNao havera segundo turno no seu municipio!\n");
    }else{
        printf("\nHavera segundo turno no seu municipio!\n");
    }
}

void questao22(void){
    int pop,cand,turno;
    char nome[20];

    printf("Informe o nome do municipio: ");
    scanf("%s",&nome);
    entrada22(&pop,&cand);

    processamento22(&pop,&cand,&turno);

    saida22(turno);
    system("pause");
}
