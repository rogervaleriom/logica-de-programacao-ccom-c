# include <conio.h>
# include <stdio.h>
# include <stdlib.h>

main () {
	float tempFar, tempCel;
	printf("Informe tempertura em graus Celsius:\n");
	scanf("%f",&tempCel);
	tempFar = (9 * tempCel / 5) + 32;
	printf("Temperatura em graus Frenheit: %.2f", tempFar);
}
