# include <conio.h>
# include <stdio.h>
# include <stdlib.h>

main () {
	int A, B, C;
	printf("Informe valor de A: ");
	scanf("%d",&A);
	printf("Informe valor de B: ");
	scanf("%d",&B);
	printf("Informe valor de C: ");
	scanf("%d",&C);
	if (A == 1) {
		printf("Morango\n");
		if (B == 1) {
			if (C == 1) {	-
				printf("Pera\n");
			} else {
				printf("Abacate\n");
			}
		}
	}
	printf("Limao\n");
}
