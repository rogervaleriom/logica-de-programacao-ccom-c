# include <conio.h>
# include <stdio.h>
# include <stdlib.h>

main () {
	float valor1, valor2, valor3, ordem1, ordem2, ordem3;
	printf("Informe o primeiro valor: ");	
	scanf("%f",&valor1);
	printf("Informe o segundo valor: ");
	scanf("%f",&valor2);
	printf("Informe o terceiro valor: ");
	scanf("%f",&valor3);
	if ((valor1 > valor2) && (valor1 > valor3)) {
		ordem3 = valor1;
		if (valor2 > valor3) {
			ordem2 = valor2;
			ordem1 = valor3;
		} else {
			ordem2 = valor3;
			ordem1 = valor2;
		}
 	} else {
		if ((valor2 > valor1) && (valor2 > valor3)) {
			ordem3 = valor2;
			if (valor1 > valor3) {
				ordem2 = valor1;
				ordem1 = valor3;
			} else {
				ordem2 = valor3;
				ordem1 = valor1;
			}
		} else {
			ordem3 = valor3;
				if (valor1 > valor2) {
					ordem2 = valor1;
					ordem1 = valor2;
				} else {
					ordem2 = valor2;
					ordem1 = valor1;
				}
		}	
	}
	printf("Valores em ordem crescente:\n");
	printf("%.2f\n", ordem1);
	printf("%.2f\n", ordem2);
	printf("%.2f\n", ordem3);
}
