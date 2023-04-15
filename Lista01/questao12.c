#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include "questao12.h"

void entrada12(float *n1,float *n2){
    printf("Informe a nota da primeira avaliacao: ");
    scanf("%f",n1);
    printf("Agora, informe a nota da segunda avaliacao: ");
    scanf("%f",n2);
}

void processamento12(float *n1,float *n2,float *mediaritmetica){
    *mediaritmetica = (*n1 + *n2)/2.0;
}

void saida12(float mediaritmetica){
    printf("A media do aluno foi %.1f\n",mediaritmetica);
    if (mediaritmetica>7.0){
        printf("O aluno esta APROVADO!\n");
    }else{
        printf("O aluno esta REPROVADO!\n");
    }
}
void questao12(void){
    float nota1,nota2,media;

    entrada12(&nota1,&nota2);

    processamento12(&nota1,&nota2,&media);

    saida12(media);
    system("pause");
}
