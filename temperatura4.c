# include <conio.h>
# include <stdio.h>
# include <stdlib.h>

main () {
	float F, C;
	printf("Informe temperatura em graus Celsius: ");
	scanf("%f",&C);
	F = ( 9 * C / 5) + 32;
	printf("Temperatura em graus Fahreinheit: %.1f\n", F);
}
