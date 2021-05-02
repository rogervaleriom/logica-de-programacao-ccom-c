# include <conio.h>
# include <stdio.h>
# include <stdlib.h>

main () {
	int golsInter, golsGremio;
	printf("Informe gols do Inter:\n");
	scanf("%d",&golsInter);
	printf("Informe gols do Gremio:\n");
	scanf("%d",&golsGremio);
	if (golsInter > golsGremio)
		printf("Inter");
	else
		if (golsInter < golsGremio)
			printf("Gremio");
		else
			printf("Empate");
}
