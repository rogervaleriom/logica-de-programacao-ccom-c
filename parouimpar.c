# include <conio.h>
# include <stdio.h>
# include <stdlib.h>

main () {
	int N;
	printf("Digite um numero inteiro.\n");
	scanf("%d",&N);
	if ((N % 2) == 0)
		printf("Numero par");
	else
		printf("Numero impar");
}
