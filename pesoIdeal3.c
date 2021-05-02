# include <conio.h>
# include <stdio.h>
# include <stdlib.h>

main () {
	int sexo;
	float pesoIdeal, altura;
	printf("Informe o sexo:   1 - Homem    2 - Mulher : ");
	scanf("%d",&sexo);
	printf("Informe a altura - em metros: ");
	scanf("%f",&altura);
	if (sexo == 1) {
		pesoIdeal = (72.2 * altura) - 58;
	} else {
		pesoIdeal = (62.1 * altura) - 44.7;
	}
	printf("Peso ideal - em KG: %.2f", pesoIdeal);
}
