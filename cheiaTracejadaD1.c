# include <conio.h>
# include <stdio.h>
# include <stdlib.h>

main () {
	float valor;
	printf("Informe valor: ");
	scanf("%f",&valor);
	if ((valor == 10) || (valor == 20) || (valor >= 30)) {
		printf("Linha cheia.");
	} else {
		printf("Linha tracejada.");	
	}
}
