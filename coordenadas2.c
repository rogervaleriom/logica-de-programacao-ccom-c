# include <conio.h>
# include <stdio.h>
# include <stdlib.h>

main () {
	float x, y;
	printf("Informe coordenada X:\n");
	scanf("%f",&x);
	printf("Informe corrdenada Y:\n");
	scanf("%f",&y);
	if ((x == 0) || (y == 0))
		printf("NAO ESTA EM NENHUM QUADRANTE.");
	else
		if (x > 0)
			if (y > 0)
				printf("I");
			else
				printf("IV");
		else
			if (y > 0)
				printf("II");
			else
				printf("III");
}
