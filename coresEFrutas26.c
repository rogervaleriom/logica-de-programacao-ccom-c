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
		printf("Verde\n");
	} else {
		if (B == 2) {
			if (C == 3) {	-
				printf("IFSul\n");
			} else {
				printf("Uva\n");
				printf("Pera\n");
			}
		} else {
			printf("Preto\n");
		}
	}
	printf("Violeta\n");
}
