# include <conio.h>
# include <stdio.h>
# include <stdlib.h>

main () {
	int X;
	float Y, consumo;
	scanf("%d", &X);
	scanf("%f", &Y);
	consumo = X / Y;
	printf("%.3f km/l", consumo);
}
