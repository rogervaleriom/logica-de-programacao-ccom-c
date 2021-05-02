# include <conio.h>
# include <stdio.h>
# include <stdlib.h>

main () {
	int nrMacas;
	float totCompra;
	printf("Informe o numero de macas compradas\n");
	scanf("%d",&nrMacas);
	if (nrMacas < 12)
		totCompra = nrMacas * 0.30;
	else
	    totCompra = nrMacas * 0.25;
	printf("Valor total da compra: %f", totCompra);		
}
