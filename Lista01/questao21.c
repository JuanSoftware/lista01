#include <stdio.h>
#include <stdlib.h>
#include "questao21.h"

void entrada21(float *n1, float *n2, float *n3){
    printf("Informe o primeiro numero: ");
    scanf("%f",n1);
    printf("Informe o segundo numero: ");
    scanf("%f",n2);
    printf("Informe o terceiro numero: ");
    scanf("%f",n3);
}

void processamento21(float *n1, float *n2, float *n3, float *maior, float *meio, float *menor){
    if ((*n1 == *n2) || (*n1 == *n3) || (*n2 == *n3)){
        if ((*n1 == *n2) && (*n1 == *n3) && (*n2 == *n3)){
            *maior = *n1;
            *meio = *n1;
            *menor = *n1;
        }

        if (*n1 == *n2){
            if (*n1 > *n3){
                *maior = *n1;
                *meio = *n1;
                *menor = *n3;
            }else{
                *maior = *n3;
                *meio = *n3;
                *menor = *n1;
            }
        }else if (*n1 == *n3){
            if (*n1 > *n2){
                *maior = *n1;
                *meio = *n1;
                *menor = *n2;
            }else{
                *maior = *n2;
                *meio = *n2;
                *menor = *n1;
            }
        }else{
            if (*n2 > *n1){
                *maior = *n2;
                *meio = *n2;
                *menor = *n1;
            }else{
                *maior = *n1;
                *meio = *n1;
                *menor = *n2;
            }
        }
    }

    if ((*n1 > *n2) && (*n1 > *n3)){
        *maior = *n1;
    }
    if ((*n2 > *n1) && (*n2 > *n3)){
        *maior = *n2;
    }
    if ((*n3 > *n1) && (*n3 > *n2)){
        *maior = *n3;
    }

    if ((*n1 < *n2)&&(*n1 < *n3)){
        *menor = *n1;
    }
    if ((*n2<*n1)&&(*n2<*n3)){
        *menor = *n2;
    }
    if ((*n3 < *n1) && (*n3 < *n2)){
        *menor = *n3;
    }

    if ((*n1 != *maior) && (*n1 != *menor)){
        *meio = *n1;
    }
    if ((*n2 != *maior) && (*n2 != *menor)){
        *meio = *n2;
    }
    if ((*n3 != *maior) && (*n3 != *menor)){
        *meio = *n3;
    }
}

void saida21(float maior, float meio, float menor){
    printf("%.1f %.1f %.1f\n",menor,meio,maior);
}

void questao21(void){
    float x,y,z,max,mid,min;

    entrada21(&x,&y,&z);

    processamento21(&x,&y,&z,&max,&mid,&min);

    saida21(max,mid,min);
}
