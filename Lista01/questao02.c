#include<stdio.h>
#include<stdlib.h>
#include "questao02.h"

void entrada02(float *n1,float *n2,float *n3,float *n4){
    printf("Informe o primeiro numero: ");
    scanf("%f",n1);
    printf("Informe o segundo numero: ");
    scanf("%f",n2);
    printf("Informe o terceiro numero: ");
    scanf("%f",n3);
    printf("Informe o quarto numero: ");
    scanf("%f",n4);
}

void processamento02(float *n1,float *n2,float *n3,float *n4,float *saida){
    *saida = (*n1 + *n2 + *n3 + *n4)/4.0;
}

void saida02(float saida){
    printf("\nA media aritmetica e igual a %.1f\n",saida);
}

void questao02(void){
    float a,b,c,d,media;

    entrada02(&a,&b,&c,&d);

    processamento02(&a,&b,&c,&d,&media);

    saida02(media);
    system("pause");
}
