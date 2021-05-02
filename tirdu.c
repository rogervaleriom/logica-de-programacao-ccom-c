# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include <math.h>

main () {
	int A, B;
	printf("Informe os valores das duas primeiras cartas:\n");
	scanf("%d",&A);
	scanf("%d",&B);
	if (A == B)
		printf("%d", A);
	else if (A > B)
		printf("%d", A);
	else
		printf("%d", B);
}
