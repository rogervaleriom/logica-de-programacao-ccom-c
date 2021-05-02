# include <conio.h>
# include <stdio.h>
# include <stdlib.h>

main () {
	float valor1, valor2, resultado;
	int operacao, novoCalc, valido, utilizado;
	utilizado = 0;
	do {
		do {	
			printf("Informe primeiro valor: ");
			scanf("%f", &valor1);
			if (valor1 < 1) {
				printf("Pode ser informado apenas valor positivo.\n");
			}
		} while (valor1 < 1);
		do {	
			printf("Informe segundo valor: ");
			scanf("%f", &valor2);
			if (valor2 < 1) {
				printf("Pode ser informado apenas valor positivo.\n");
			}
		} while (valor2 < 1);
		do { 
			valido = 1;
			printf("1 - Adicao\n");
			printf("2 - Subtracao\n");
			printf("3 - Multiplicacao\n");
			printf("4 - Divisao\n");
			printf ("Informe a operacao: ");
			scanf("%d", &operacao);
			switch (operacao) {			
				case 1:	resultado = valor1 + valor2;
						printf("Resultado da adicao de %.2f e %.2f = %.2f", valor1, valor2, resultado);
						break;
				case 2: resultado = valor1 - valor2;
						printf("Resultado da subtracao de %.2f e %.2f = %.2f", valor1, valor2, resultado);	
						break;
				case 3: resultado = valor1 * valor2;
						printf("Resultado da multiplicacao de %.2f e %.2f = %.2f", valor1, valor2, resultado);
						break;
				case 4: resultado = valor1 / valor2;
						printf("Resultado da divisao de %.2f por %.2f = %.2f", valor1, valor2, resultado);
						break;
				default: printf("Opcao invalida.\n");
						 valido = 0;
			} 
		} while (valido == 0);
		utilizado++;
		printf ("\nNovo Calculo   (1 - Sim / 2 - Nao) ? ");
		scanf("%d", &novoCalc);
	} while (novoCalc == 1);
	printf("O algoritmo foi utilizado %d vez(es).", utilizado);
}
