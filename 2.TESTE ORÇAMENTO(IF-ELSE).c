#include<stdio.h>
#include<locale.h>

//EXERC ORÇAMENTO
//IF&ELSE

int main(){
	
	float sal_recebido, total;
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("\n Informe seu salário: ");
	scanf("%f", &sal_recebido);
	printf("Informe o total de seus gastos: ");
	scanf("%f", &total);
	
	if(sal_recebido>=total)
	{
		printf ("\n Gastos dentro do Orçamento");
	}else
	printf("\n Orçamento Estourado");
	return 0;
}
