#include <stdio.h>
#include <stdlib.h>
#include "questao05.h"

void entrada05(float *sb,int *qtdep){
    printf("\nInforme seu salario base: R$");
    scanf("%f",sb);
    printf("Informe seu numero de dependentes: ");
    scanf("%d",qtdep);
}
void processamento05(float *sb,float *sbr, int *qtdep){
    printf("Calculando...\n");
    *sbr = *sb + (*qtdep * 32);
    *sbr = *sbr - (*sbr * 27.5)/100.0;
}
void saida05(float sbr){
    printf("\nSeu novo salario e igual a R$%.2f\n",sbr);
}

void questao05(void){
    float sal, salBru;
    int dependentes;

    entrada05(&sal,&dependentes);

    processamento05(&sal,&salBru,&dependentes);

    saida05(salBru);
    system("pause");
}
