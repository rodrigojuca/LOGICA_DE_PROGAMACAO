#include<stdio.h>

int main(){
	
	//CALCULADORA BÁSICA
	
	float x, y, result;
	char calcule;
	
	printf("Me informe o primeiro numero para operação\n");
	scanf("%f",& x);//dar mais atenção aos ponteiros e os \n
	printf("Informe a operação desejada(+ - * /)\n");
	scanf("%s",& calcule);
	printf("Informe outro valor:\n");
	scanf("%f",& y);

	switch (calcule){
		case'+':
			result=x+y;
			break;
		case'-':
			result=x-y;
			break;
		case'*':
			result=x*y;
			break;
		case'/':
			if(y!=0){
				result=x/y;
		}else{
			printf("Erro: Divisão por zero/n");
			return 1;
		}
		break;
				
		default:
			printf("Operação invalida");
			return 1;
		
	}
	printf("Resultado:%.2f\n", result);
	return 0;
	
		
}
