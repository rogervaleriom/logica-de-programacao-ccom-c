# include <conio.h>
# include <stdio.h>
# include <stdlib.h>

main () {
	float valor;
	printf("Informe valor: ");
	scanf("%f",&valor);
	if ((valor > -8) && (valor < 25)) {
		printf("Linha tracejada.");
	} else {
		printf("Linha cheia.");	
	}
}
