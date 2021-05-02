# include <conio.h>
# include <stdio.h>
# include <stdlib.h>

main () {
	float h, pIdeal;
	int sexo; 
	printf("Informe a o sexo      1 - FEMINNO    2  - MASCULINO:\n");
	scanf("%d",&sexo);
	printf("Informe a altura:\n");
	scanf("%f",&h);
	if (sexo == 1)
		pIdeal = (62.1 * h) - 44.7;
	else
		pIdeal = (72.7 * h) - 58;
	printf("Peso ideal: %f", pIdeal);
}
