# include <conio.h>
# include <stdio.h>
# include <stdlib.h>

main () {
	float valor1, valor2, divisao;
	printf("Informe o primeiro valor - dividendo: ");
	scanf("%f",&valor1);
	do {
		printf("Informe o segundo valor - divisor: ");
		scanf("%f",&valor2);
		if (valor2 == 0) {
			printf("Valor do divisor nao pode ser zero.\n");
		}
	} while (valor2 == 0);
	divisao = valor1 / valor2;
	printf("Resultado da divisao do primeiro pelo segundo valor: %.2f", divisao);
}
