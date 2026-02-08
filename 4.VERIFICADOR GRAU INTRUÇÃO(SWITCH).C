#include<stdio.h>
#include<locale.h>

//EXERC VERFICADOR DE GRAU
//SWITCH

int main(){
	
	int Grau;
	setlocale(LC_ALL,"Portuguese");
	printf("Digite o seu grau de instrução: \n");
	printf("1-Para Nivel Médio \n");
	printf("2-Para Nivel Graduado \n");
	printf("3-Para Nivel Pós-Graduado \n");
	scanf("%d", &Grau);
	
	switch(Grau) {
	case 1:
		printf("Nivel Médio");
		break;
	case 2:
		printf("Graduado");
		break;
	case 3:
		printf("Pós-graduado");
		break;
	default:
		printf("Não informado");
}
}
