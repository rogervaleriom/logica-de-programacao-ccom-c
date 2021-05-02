# include <conio.h>
# include <stdio.h>
# include <stdlib.h>

main () {
	float valor1, valor2, divisao;
	printf("Informe o primeiro valor - dividendo: ");
	scanf("%f",&valor1);
	valor2 = 0;
	while (valor2 == 0) {
		printf("Informe o segundo valor - divisor: ");
		scanf("%f",&valor2);
		if (valor2 == 0) {
			printf("Valor invalido. O divisor nao pode ser zero.\n");
		}
	}
	divisao = valor1 / valor2;
	printf("Resultado da divisao do primeiro pelo segundo valor: %.2f", divisao);
}
