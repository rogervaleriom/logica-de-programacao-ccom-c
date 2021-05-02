#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

main () {
	float A, B, C;
	printf("Informe a medida do primeiro lado do triangulo: ");
	scanf("%f",&A);
	printf("Informe a medida do segundo lado do triangulo: ");
	scanf("%f",&B);
	printf("Informe a medida do terceiro lado do triangulo: ");
	scanf("%f",&C);
	if ((A == B) && (A == C)) {
		printf("Triangulo EQUILATERO.");
	} else if ((A == B) || (A == C) || (B == C)){
		printf("Triangulo ISOSCELES.");	
	} else {
		printf("Triangulo ESCALENO.");
	}
}
