# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include <math.h>

main () {
	float raio, area;
	printf("Informe o raio do circulo: ");
	scanf("%f",&raio);
	area = M_PI * pow(raio, 2);
	printf("A area do circulo e: %f\n", area);
}
