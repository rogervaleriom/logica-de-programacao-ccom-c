# include <conio.h>
# include <stdio.h>
# include <stdlib.h>

main () {
	float A, B;
	printf("Informe o primeiro valor:\n");
	scanf("%f",&A);
	printf("Informe o segundo valor:\n");
	scanf("%f",&B);
	if (A > B)
		printf("Ordem crescente: %f %f", B, A);
	else
		printf("Ordem crescente: %f %f", A, B);
}
