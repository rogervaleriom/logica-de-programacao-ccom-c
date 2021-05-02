# include <conio.h>
# include <stdio.h>
# include <stdlib.h>

main () {
	float tempFar, tempCel;
	printf("Informe tempertura em graus Farenheit:\n");
	scanf("%f",&tempFar);
	tempCel = 5 * (tempFar - 32) / 9;
	printf("Temperatura em graus Celsius: %.2f", tempCel);
}
