# include <conio.h>
# include <stdio.h>
# include <stdlib.h>

main () {
	float valor;
	printf("Informe valor\n");
	scanf("%f", &valor);
	if (valor >= 0)
		printf("Positivo.");
	else
		printf("Negativo.");
}
