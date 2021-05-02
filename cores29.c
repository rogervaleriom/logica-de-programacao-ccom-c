# include <conio.h>
# include <stdio.h>
# include <stdlib.h>

main () {
	int A, B, C, D, E;
	printf("Informe valor de A: ");
	scanf("%d",&A);
	printf("Informe valor de B: ");
	scanf("%d",&B);
	printf("Informe valor de C: ");
	scanf("%d",&C);
	printf("Informe valor de D: ");
	scanf("%d",&D);
	printf("Informe valor de E: ");
	scanf("%d",&E);
	if (A == 1) {
		printf("Amarelo\n");	
		if (B == 1) {
			printf("Azul\n");
		}
		printf("Preto\n");		
		if (D == 1) {-
			printf("Verde\n");
		} else {
			printf("Violeta\n");
		}
	} else {
		if (C == 1) {
			printf("Vermelho\n");
		}
		if (E == 1) {
			printf("Laranja\n");
			printf("Cinza\n");
		}
	}
	printf("Branco\n");
}
