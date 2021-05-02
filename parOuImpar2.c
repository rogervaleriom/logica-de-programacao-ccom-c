# include <conio.h>
# include <stdio.h>
# include <stdlib.h>

main () {
	int numero; 
	printf("Informe um numero inteiro: ");
	scanf("%d",&numero);
	if (numero % 2 == 0) {
		printf("O numero e par.");
	}	
	else {
		printf("O numero e impar.");
	}	
}
