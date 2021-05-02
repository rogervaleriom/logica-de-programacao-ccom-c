# include <conio.h>
# include <stdio.h>
# include <stdlib.h>


main () {
	float valor;
	printf("Informe valor: ");
	scanf("%f",&valor);
	if (valor == 0) {
		printf("Valor zero.");
	} else {
		if (valor > 0) {		
			printf("Valor positivo.");
		} else {
			printf("Valor negativo.");
		}
	}
}
