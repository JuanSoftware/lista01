#include <stdio.h>
#include <stdlib.h>
#include "questao08.h"

void entrada08(float *quilometro){
  printf("Informe a velocidade em km/h: ");
  scanf("%f", quilometro);
}

void processamento08(float *quilometro, float *metros){
  *metros = *quilometro / 3.6;
}

void saida08(float metros){
  printf("A velocidade convertida é igual a %.2fm/s\n",metros);
}

void questao08 (void){
  float km, ms;

  entrada08(&km);

  processamento08(&km,&ms);

  saida08(ms);
  system("pause");
}
