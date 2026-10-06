#include <stdio.h>
#include <locale.h>

char nome[50];
int idade;

main() {
	setlocale(LC_ALL, "Portuguese");
	
	printf("\nInsira seu nome: \n");
	scanf("%s", nome);
	
	printf("\nQual é a sua iadade? \n");
	scanf("%d", &idade);
	
	do {
		
		if(idade >= 18){
			printf("\nMaior de idade!\n");
		} else {
			printf("\nMenor de idade!\n");
		}
		
		printf("\nInsira seu nome: \n");
		scanf("%s", nome);
	
		printf("\nQual é a sua iadade? \n");
		scanf("%d", &idade);
		
	} while (idade = 0);
		printf("Finalizado!");
	
	return 0;
}
