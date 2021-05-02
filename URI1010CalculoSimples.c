# include <conio.h>
# include <stdio.h>
# include <stdlib.h>

main () {
	int codPeca1, codPeca2, nrPeca1, nrPeca2;
	float valorPeca1, valorPeca2, valorAPagar;
	scanf("%d %d %f", &codPeca1, &nrPeca1, &valorPeca1);
	scanf("%d %d %f", &codPeca2, &nrPeca2, &valorPeca2);
	printf("VALOR A PAGAR: R$ %.2f\n", (nrPeca1 * valorPeca1) + (nrPeca2 * valorPeca2));
	
}
