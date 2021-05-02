# include <conio.h>
# include <stdio.h>
# include <stdlib.h>

main () {
	float valor;
	printf("Informe um valor: ");
	scanf("%f",&valor);
	if (valor < 0) {
		printf("Valor negativo.");
	} else {
		printf("Valor positivo.");
	}
}
