# include <conio.h>
# include <stdio.h>
# include <stdlib.h>


main () {
	int A, B, C;
	printf("Informe o valor de A:\n");
	scanf("%d",&A);
	printf("Informe o valor de B:\n");
	scanf("%d",&B);
	printf("Informe o valor de C:\n");
	scanf("%d",&C);
	if (A == 1)
		printf("Morango\n");
		if (B == 1)
			if (C == 1)
				printf("Pera\n");
			else
				printf("Abacate\n");
	printf("Limao");
}
