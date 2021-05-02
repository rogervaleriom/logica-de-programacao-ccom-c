# include <conio.h>
# include <stdio.h>
# include <stdlib.h>

main () {
	float numero1, numero2; 
	printf("Informe o primeiro numero: ");
	scanf("%f",&numero1);
	printf("Informe o segundo numero: ");
	scanf("%f",&numero2);
	if (numero1 > numero2) {
		printf("Numeros em ordem crescente:\n");
		printf("%.2f\n", numero2);
		printf("%.2f\n", numero1);
	}	
	else {
		printf("Numeros em ordem crescente:\n");
		printf("%.2f\n", numero1);
		printf("%.2f\n", numero2);
	}	
}
