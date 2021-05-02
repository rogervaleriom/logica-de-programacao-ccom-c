# include <conio.h>
# include <stdio.h>
# include <stdlib.h>

main () {
	int nrLados;
	float medidaLado, perimetro, area;
	printf("Informe numero de lados do poligono:\n");
	scanf("%d",&nrLados);
	if (nrLados < 3)
		printf("NAO E' UM POLIGONO");
	else
		if (nrLados > 5)
			printf("POLIGONO NAO IDENTIFICADO");
		else	 
			if (nrLados <=4) {	
				printf("Informe medida do lado:\n");
				scanf("%f",&medidaLado);
			}
			if (nrLados == 3) {
				printf("Triangulo\n");
				perimetro = 3 * medidaLado;
				printf("Perimetro: %f", perimetro);	
			}			
			else
				if (nrLados == 4) {
					printf("Quadrado\n");
					area = medidaLado * medidaLado;
					printf("Area: %f", area);
					}
				else
					if (nrLados == 5)
						printf("Pentagono");	
	}
