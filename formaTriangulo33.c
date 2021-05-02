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
	if ( (A < (B + C)) && (B < (A + C)) && (C < (A + B)) ) {
		printf("Forma triangulo.");
	} else {
		printf("Nao forma triangulo.");
	}
}
