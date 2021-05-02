# include <conio.h>
# include <stdio.h>
# include <stdlib.h>

main () {
	float V1, V2;
	printf("Digite primeiro valor\n");
	scanf("%f",&V1);
	printf("Digite segundo valor\n");
	scanf("%f",&V2);
	printf("Ordem crescente:\n");
	if (V1 < V2)
		{
		printf("%f\n", V1);
		printf("%f\n", V2);
		}
	else
		{
		printf("%f\n", V2);
		printf("%f\n", V1);
		}
	
}
