#include<stdio.h>
#include<stdlib.h>
#include"questao10.h"

void questao10(void){
    char senha[20], senhaUsuario[]= "LINGUAGEMC";
	printf("Digite a senha: ");
	scanf("%s",&senha);

	if(strcmp(senha,senhaUsuario)== 0){
		printf("Senha correta");

	}
	else{
		printf("Senha errada");
	}
    system("pause");
}
