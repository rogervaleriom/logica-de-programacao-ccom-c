# include <conio.h>
# include <stdio.h>
# include <stdlib.h>

main () {
	float A, B;
	printf("Informe primeiro valor:\n");
	scanf("%f", &A);
	printf("Informe segundo valor:\n");
	scanf("%f", &B);
	if (A > B)
		printf("Valor maior: %f", A);
	else
		printf("Valor maior: %f", B);
}
