# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include <math.h>

main () {
	double A, B, C, determ, R1, R2;
	printf("Informe valor de A:\n");
	scanf("%lf",&A);
	printf("Informe valor de B:\n");
	scanf("%lf",&B);
	printf("Informe valor de C:\n");
	scanf("%lf",&C);
	determ = ((B * B) - (4 * A * C));
	if (determ < 0)
		printf("Impossivel calcular.");
		else if ((2 * A) == 0)
	 		printf("Impossivel calcular.");
	 		else {
			R1 = (-B + sqrt(determ)) / (2 * A);
			printf("R1 = %.5lf\n", R1);
			R2 = (-B - sqrt(determ)) / (2 * A);
			printf("R2 = %.5lf\n", R2);
			}
			
}
