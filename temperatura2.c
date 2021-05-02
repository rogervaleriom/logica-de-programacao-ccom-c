# include <conio.h>
# include <stdio.h>
# include <stdlib.h>

main () {
	float C, F;
	printf("Digite temperatura em graus Celsius\n");
	scanf("%f",&C);
	F = (9 * C / 5) + 32;
	printf("%.1f em graus Celsius equivale a %.1f graus Farenheit", C, F);
}
