#include <stdio.h>
#include <locale.h>

//EXERC DADOS DAS COMPRAS

int main(){
    float compra, entrada, valorparcelado, valorparcela;
    int parcela;
    
    setlocale(LC_ALL,"Portuguese");
    
    printf("Digite o valor da sua compra: \n");
    scanf("%f", &compra);
    printf("Digite a quantidade de parcela: \n");
    scanf("%d", &parcela);
    printf("Digite o valor da entrada: \n");
    scanf("%f", &entrada);
    
    valorparcela=(compra-entrada)/parcela;
    valorparcelado=compra-entrada;
    
    printf("\nDADOS DA COMPRA: \n");
    printf("Valor da compra: %.2f \n", compra);
	printf("Quantidade de parcelas: %d \n", parcela);
	printf("Valor de entrada: %2.f \n", entrada);
	printf("Valor parcelado: %2.f \n", valorparcelado);
	printf("Valor da Parcela Mês: %2.f \n", valorparcela);
}
