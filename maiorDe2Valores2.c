# include <conio.h>
# include <stdio.h>
# include <stdlib.h>

main () {
	float valor1, valor2;
	printf("Informe primeiro valor: ");
	scanf("%f",&valor1);
	printf("Informe o segundo valor: ");
	scanf("%f",&valor2);
	if (valor1 > valor2) {
		printf("O maior valor e o primeiro informado: %.2f.", valor1);
	} else {
		printf("O maior valor e o segundo informado: %.2f.", valor2);
	}
}
