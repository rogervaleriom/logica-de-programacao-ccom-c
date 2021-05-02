# include <conio.h>
# include <stdio.h>
# include <stdlib.h>

main () {
	float valor1, valor2, valor3, maior1, maior2, soma;
	printf("Informe o primeiro valor: ");	
	scanf("%f",&valor1);
	printf("Informe o segundo valor: ");
	scanf("%f",&valor2);
	printf("Informe o terceiro valor: ");
	scanf("%f",&valor3);
	if ((valor1 > valor2) && (valor1 > valor3)) {
		maior1 = valor1;
		if (valor2 > valor3) {
			maior2 = valor2;
		} else {
			maior2 = valor3;
		}
 	} else {
		if ((valor2 > valor1) && (valor2 > valor3)) {
			maior1 = valor2;
			if (valor1 > valor3) {
				maior2 = valor1;
			} else {
				maior2 = valor3;	
			}
		} else {
			maior1 = valor3;
				if (valor1 > valor2) {
				maior2 = valor1;
			} else {
				maior2 = valor2;	
			}
		}
	}
	soma = maior1 + maior2;
	printf("Soma dos dois valores maiores: %.2f", soma);
}
