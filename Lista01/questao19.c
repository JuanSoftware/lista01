#include <stdio.h>
#include <stdlib.h>
#include "questao19.h"

void entrada19(float *lado1,float *lado2,float *lado3){
    printf("Informe a medida do primeiro lado: ");
    scanf("%f",lado1);
    printf("Informe a medida do segundo lado: ");
    scanf("%f",lado2);
    printf("Informe a medida do terceiro lado: ");
    scanf("%f",lado3);
}

void processamento19(float *lado1,float *lado2,float *lado3,int *tipo){
    if (*lado1 == *lado2 && *lado2 == *lado3){
        *tipo = 1;
    }else if (*lado1 == *lado2 || *lado2 == *lado3 || *lado1 == *lado3){
        *tipo = 2;
    }else{
        *tipo = 3;
    }
}

void saida19(int tipo){
    if (tipo == 1){
        printf("O triangulo e equilatero! (Todos os lados iguais)\n");
    }else if(tipo == 2){
        printf("O triangulo e isosceles! (Dois lados iguais)\n");
    }else{
        printf("O triangulo e escaleno! (Todos os lados possuem medidas diferentes)\n");
    }
}

void questao19(void){
    float a,b,c;
    int triangulo;

    entrada19(&a,&b,&c);

    processamento19(&a,&b,&c,&triangulo);

    saida19(triangulo);
    system("pause");
}
