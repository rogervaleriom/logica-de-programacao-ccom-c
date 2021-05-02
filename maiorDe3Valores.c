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
		printf("Valor maior: %f", valor1);
	if ((valor2 > valor1) && (valor2 > valor3))
		printf("Valor maior: %f", valor2);
	if ((valor3 > valor1) && (valor3 > valor2))
		printf("Valor maior: %f", valor3);
}
