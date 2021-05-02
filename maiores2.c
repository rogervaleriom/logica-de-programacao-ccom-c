# include <conio.h>
# include <stdio.h>
# include <stdlib.h>

main () {
	float A, B, C, S;
	printf("Digite primeiro valor:\n");
	scanf("%f",&A);
	printf("Digite segundo valor:\n");
	scanf("%f",&B);
	printf("Digite terceiro valor:\n");
	scanf("%f",&C);
	if (A < B && B < C)
		S = B + C;
	else
		if (B < A && B < C)
			S = A + C;
		else
			S = A + B;
printf ("Soma dos dois maiores = %f", S);
}
