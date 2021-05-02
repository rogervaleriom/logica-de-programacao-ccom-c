#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

main () {
	int angulo1, angulo2, angulo3;
	printf("Informe a medida em graus do primeiro angulo do triangulo: ");
	scanf("%d",&angulo1);
	printf("Informe a medida em graus do segundo angulo do triangulo: ");
	scanf("%d",&angulo2);
	printf("Informe a medida em graus do terceiro angulo do triangulo: ");
	scanf("%d",&angulo3);
	if ((angulo1 + angulo2 + angulo3) != 180) { 
		printf("Informacoes invalidas. A soma dos angulos de um triangulo deve ser 180 graus.");
	} else if ((angulo1 == 90) || (angulo2 == 90) || (angulo3 == 90)) {
		printf("Triangulo retangulo.");
	} else if ((angulo1 > 90) || (angulo2 > 90) || (angulo3 > 90)) {
		printf("Triangulo obtusangulo.");
	} else {
		printf("Triangulo acutangulo.");
	}
}
