# include <conio.h>
# include <stdio.h>
# include <stdlib.h>

main () {
	float A, B, C, M1, M2, S;
	printf("Digite primeiro valor:\n");
	scanf("%f",&A);
	printf("Digite segundo valor:\n");
	scanf("%f",&B);
	printf("Digite terceiro valor:\n");
	scanf("%f",&C);
	if (A > B)
		if (A > C) {
		   M1 = A;
		   printf ("  1-   M1 %f", M1);
		   if (B > C)
		   		M2 = B;	  
			else
				M2 = C;
			printf ("  2-   M2 %f", M2);
		}
		else {
			M1 = C;
			if (B > A)
		 		M2 = B;
			else
				M2 = A;
		}
	else
		if (B > C) {
			M1 = B;
			printf ("  3 - M1 %f", M1);
			if (C > A)
				M2 = C;
			else
				M2 = A;
			printf ("  4-  M2 %f", M2);
		}		
		else
			M1 = C;
			M2 = B;
	printf ("  5-   M1 %f", M1);
	printf ("  6-   M2 %f", M2);
	S = M1 + M2;
printf ("Soma dos dois maiores = %f", S);
}
