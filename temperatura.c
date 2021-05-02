# include <conio.h>
# include <stdio.h>
# include <stdlib.h>

main () {
	float F, C;
	printf("Digite a temperatura em graus Farenheit\n");
	scanf("%f",&F);
	C = ((F - 32)/9) * 5;
	printf ("%.1f equivale a %.1f graus celsius", F, C);
}
