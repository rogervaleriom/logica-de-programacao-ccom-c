# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include <math.h>

main () {
	float A, B, C, AT, AQ, AR, AC;
	printf("Informe primeiro numero:\n");
	scanf("%f",&A);
	printf("Informe segundo numero:\n");
	scanf("%f",&B);
	printf("Informe terceiro numero:\n");
	scanf("%f",&C);
	AT = A * B / 2;
	printf("Area de triangulo de base %f e altura %f: %f\n", A, B, AT);
    AQ = B*B;
	printf("Area do quadrado de lado %f: %f\n", B, AQ);
	AR = A*B;
	printf("Area do retangulo de lados %f e %f: %f\n", A, B, AR);
	AC = M_PI * C * C;
	printf("Area do circulo de raio %f: %f\n", C, AC);
}
