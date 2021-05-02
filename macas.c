# include <conio.h>
# include <stdio.h>
# include <stdlib.h>

main () {
	int NRMAC;
	float VALOR;
	printf("Digite o numero de macas.\n");
	scanf("%d",&NRMAC);
	if (NRMAC < 12)
		VALOR = NRMAC * 0.30;
	else
		VALOR = NRMAC * 0.25;
	printf("Valor da compra: %.2f", VALOR);	
}
