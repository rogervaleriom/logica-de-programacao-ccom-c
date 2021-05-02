# include <conio.h>
# include <stdio.h>
# include <stdlib.h>

main () {
	int SEXO;
	float H, PI;
	printf("Digite o sexo.      1 - MASC      2 - FEM\n");
	scanf("%d",&SEXO);
	printf("Digite a altura\n");
	scanf("%f",&H);
	if (SEXO = 1)
		PI = (72.7 * H) - 58;
	else
		PI = (62.1 * H) - 44.7;
	printf("Peso ideal: %f", PI);
}
