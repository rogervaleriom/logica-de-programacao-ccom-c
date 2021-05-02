# include <conio.h>
# include <stdio.h>
# include <stdlib.h>

main () {
	float V1, V2, MAIOR;
	printf("Digite primeiro valor\n");
	scanf("%f",&V1);
	printf("Digite segundo valor\n");
	scanf("%f",&V2);
	if (V1 > V2)
		MAIOR = V1;
	else
		MAIOR = V2;
	printf("Maior valor: %f", MAIOR);
}
