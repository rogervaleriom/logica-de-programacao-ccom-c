# include <conio.h>
# include <stdio.h>
# include <stdlib.h>


main () {
	int A, B;
	printf("Informe valor de A: ");
	scanf("%d",&A);
	printf("Informe valor de B: ");
	scanf("%d",&B);
	printf("Amarelo\n");
	if (A == 1) {
		printf("Azul\n");
		printf("Verde\n");
		printf("Roxo\n");
	} else {
		printf("Pera\n");
		if (B == 1) {		
			printf("Maca\n");
		} else {
			printf("Morango\n");
		}
	}	
	printf("Uva\n");
}
