# include <conio.h>
# include <stdio.h>
# include <stdlib.h>

main () {
	float F, C;
	printf("Informe temperatura em graus Fahrenheit: ");
	scanf("%f",&F);
	C = ((F - 32) / 9) * 5;
	printf("Temperatura em graus Celsius: %.1f\n", C);
}
