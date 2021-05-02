# include <conio.h>
# include <stdio.h>
# include <stdlib.h>

main () {
	double raio, area;
	scanf("%lf",&raio);
	area = 3.14159 * raio * raio;
	printf("A = %.4lf", area);
}
