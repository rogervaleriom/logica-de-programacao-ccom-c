# include <conio.h>
# include <stdio.h>
# include <stdlib.h>

main () {
	float compr, larg, alt, area1, area2, areaTot, nrCaixas;
    printf("Informe o comprimento:\n");
	scanf("%f",&compr);
	printf("Informe a largura:\n");
	scanf("%f",&larg);
	printf("Informe a altura:\n");
	scanf("%f",&alt);
	area1 = compr * alt * 2;
	area2 = larg * alt * 2;
	areaTot = area1 + area2;
	nrCaixas = areaTot / 1.5;
	printf("Numero de caixas de azulejo: %f", nrCaixas);	
}
