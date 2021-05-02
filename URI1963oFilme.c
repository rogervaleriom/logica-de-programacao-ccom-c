# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include <math.h>

main () {
	float A, B, valAumento, percAumento;
	scanf("%f %f", &A, &B);
	valAumento = B - A;
	// printf("%f\n", valAumento);
	percAumento = valAumento * 100 / A;
    printf("%.2f%%\n", percAumento);
}
