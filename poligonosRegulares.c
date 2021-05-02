# include <conio.h>
# include <stdio.h>
# include <stdlib.h>


main () {
	int nrLados;
	float medidaLado, perimetro, area;
	printf("Informe numero de lados de um poligono regular: ");
	scanf("%d",&nrLados);
	printf("Informe medida do lado: ");
	scanf("%f",&medidaLado);
	if (nrLados == 3) {
		printf("TRIANGULO.\n");
		perimetro = medidaLado * 3;
		printf("Perimetro: %.2f", perimetro);
	} else {
		if (nrLados == 4) {		
			printf("QUADRADO.\n");
			area = medidaLado * medidaLado;
			printf("Area: %.2f", area);
		} else {
			printf("PENTAGONO.");
		}
	}
}
