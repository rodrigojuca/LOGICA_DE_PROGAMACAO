#include<stdio.h>
#include<stdlib.h>

//EXEC RECONHECER QUANTIDADE DE DÍGITOS

int main(){
	
	int valor;
	
	printf("Digite um valor para reconhecimento de digitos:\n");
	scanf("%d", &valor);
	
	if(valor<10){
	printf("O numero digitado tem 1 digito \n");
	}else
	if(valor<100){
		printf("O numero digitado cotem 2 digitos \n");
	}else
	if(valor<1000){
		printf("O valor digitado cotem 3 digitado \n");
	}else
	if(valor<10000){
		printf("O valor digitado cotem 4 digitado \n");
	}else
	if(valor<100000){
		printf("O valor digitado cotem 5 digitado \n");
	}else
	if(valor<1000000){
		printf("O valor digitado cotem 6 digitado \n");
	}else{
	printf("Numero Invalido\n");
	}
	system("pause");
	return 0;
}
