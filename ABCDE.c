# include <conio.h>
# include <stdio.h>
# include <stdlib.h>


main () {
	int A, B, C, D, E;
	printf("Informe o valor de A:\n");
	scanf("%d",&A);
	printf("Informe o valor de B:\n");
	scanf("%d",&B);
	printf("Informe o valor de C:\n");
	scanf("%d",&C);
	printf("Informe o valor de D:\n");
	scanf("%d",&D);
	printf("Informe o valor de E:\n");
	scanf("%d",&E);
	if (A == 1) {
		printf("Amarelo\n");
		if (B == 1) 
			printf("Azul\n");
		printf("Preto\n");				
		if ( D == 1)
			printf("Verde\n");
		else
			printf("Violeta\n"); }
	else {
		if (C == 1)
			printf("Vermelho\n");
		if (E == 1) {
			printf("Laranja\n");
			printf("Cinza\n");
			}
		}
}
		
