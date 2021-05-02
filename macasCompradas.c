# include <conio.h>
# include <stdio.h>
# include <stdlib.h>

main () {
	int macas;
	float valorTotal;
	printf("Informe o numero de macas compradas : ");
	scanf("%d",&macas);
	if (macas < 12) {
		valorTotal = macas * 0.30;
	} else {
		valorTotal = macas * 0.25;
	}
	printf("Valor total da compra: R$ %.2f", valorTotal);
}
