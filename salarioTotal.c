#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

main () {
	float salFixo, vendas, comissao, salTotal;
	printf("Informe o salario fixo: ");
	scanf("%f",&salFixo);
	printf("Informe o valor total das vendas: ");
	scanf("%f",&vendas);
	if (vendas > 1500) {
		comissao = vendas * 0.05;
	} else {
		comissao = vendas * 0.03;	
	}	
	salTotal = salFixo + comissao;
	printf("Salario total: %.2f\n", salTotal);
}
