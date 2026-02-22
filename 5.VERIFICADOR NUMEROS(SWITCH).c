#include<stdio.h>

int main(){
	
	//VERIFICADOR SE O NUMERO É POSITIVO OU NEGATIVO
	
	int numero;

	printf("Digite um valor para verificar se e positivo ou negativo:\n");
	scanf("%d",& numero);
	
	if(numero>0)
	printf("Numero positivo");
	else
	if(numero<0)
	printf("numero negativo");
	else
	if(numero==0)
	printf("numero equivalente a 0");
	

}
