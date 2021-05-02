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
	if (A > B)
		if (B > C)
			S = A + B;
		else
			S = A + C;
	else
		if (A > C)
			S = B + A;
		else
			S = B + C;
	printf ("Soma dos dois maiores = %f", S);
}
