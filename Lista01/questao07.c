#include<stdio.h>
#include<stdlib.h>
#include "questao07.h"


void entrada07(float *raio){
  printf("\nInforme o comprimento do raio (em cm): ");
  scanf("%f",raio);
}

void processamento07(float *raio, float *diametro, float *circunferencia, float *area, float *volume){
  printf("Calculando...\n\n");
  *diametro = *raio * 2;
  *area = 3.14 * *raio * *raio;
  *circunferencia = 2 * 3.14 * *raio;
  *volume = (4.0/3.0) * 3.14 * *raio * *raio * *raio;
}

void saida07(float diametro, float circunferencia, float area, float volume){
  printf("O seu círculo possui:\nDiâmetro: %.2fcm\nÁrea: %.2fcm2\n",diametro, area);
  printf("Circunferência: %.2fcm\n\nA sua esfera tem %.2fcm3 de volume\n", circunferencia, volume);
}

void questao07 (void){
  float r, diam, perimetro, vol, are;

  entrada07 (&r);

  processamento07(&r, &diam, &perimetro, &are, &vol);

  saida07(diam, perimetro, are, vol);
  system("pause");
}
