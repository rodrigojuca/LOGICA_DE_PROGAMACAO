#include<stdio.h>

int main(){

//CLASSIFICAÇÃO SE DE FAIXA ETÁRIA

		int numero;
	
	printf("Digite a idade para classificar: \n");
	scanf("%d",& numero);
	
	if(numero>=0){
	if(numero>=0 && numero<=12){
	printf("Crianca");
}
	else
	if(numero>=13 && numero<=17){
	printf("Adolecente");
}
	else
	if(numero>=18 && numero<=59){
	printf("Adulto");
	}
	else
	if(numero>=60){
	printf("Idoso");
}
}
else 
printf("Valor incorreto");
	
	
	
}
