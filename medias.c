# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include <math.h>

main () {
	float N1, N2, N3, MA, MH, MG;
	printf("Informe primeiro numero:\n");
	scanf("%f",&N1);
	printf("Informe segundo numero:\n");
	scanf("%f",&N2);
	printf("Informe terceiro numero:\n");
	scanf("%f",&N3);
	MA = (N1 + N2 + N3) / 3;
	printf("Media aritmetica: %f\n", MA);
	MH = 3 / ( (1 / N1) + (1 / N2) + (1 / N3) );
	printf("Media harmonica: %f\n", MH);
	// MG = pow(N1 + N2 + N3, 1.0/3.0);
	MG = cbrt(N1 + N2 + N3);
	printf("Media geometrica: %f\n", MG);
}
