# include <conio.h>
# include <stdio.h>
# include <stdlib.h>

main () {
	float valor1, valor2, valor3;
	printf("Informe primeiro valor:\n");
	scanf("%f",&valor1);
	printf("Informe segundo valor:\n");
	scanf("%f",&valor2);
	printf("Informe terceiro valor:\n");
	scanf("%f",&valor3);
	if ((valor1 > valor2) && (valor1 > valor3))
		if (valor2 > valor3)
			printf("Soma dos 2 maiores: %f", (valor1 + valor2));
		else
			printf("Soma dos 2 maiores: %f", (valor1 + valor3));
	if ((valor2 > valor1) && (valor2 > valor3))
		if (valor1 > valor3)
			printf("Soma dos 2 maiores: %f", (valor2 + valor1));
		else
			printf("Soma dos 2 maiores: %f", (valor2 + valor3));
	if ((valor3 > valor1) && (valor3 > valor2))
		if (valor1 > valor2)
			printf("Soma dos 2 maiores: %f", (valor3 + valor1));
		else
			printf("Soma dos 2 maiores: %f", (valor3 + valor2));
}
