# include <conio.h>
# include <stdio.h>
# include <stdlib.h>

main () {
	float PRECO, LITROS, TOTCOMP, COMPDESC;
	printf("Digite o numero de litros\n");
	scanf("%f",&LITROS);
	printf("Digite o preco\n");
	scanf("%f",&PRECO);
	TOTCOMP = LITROS * PRECO;
	printf("Valor da compra: %.2f\n", TOTCOMP);
	COMPDESC = TOTCOMP - (TOTCOMP * 15 / 100);
	printf("Valor com 15%% de desconto: R$ %.2f\n", COMPDESC);
}
