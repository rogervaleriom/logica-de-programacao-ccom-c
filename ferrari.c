# include <conio.h>
# include <stdio.h>
# include <stdlib.h>

main () {
	float comprPista, nrVoltas, nrReab, consumo, percTotKm, percReab, litrosReab;
	printf("Informe comprimento da pista em metros:\n");
	scanf("%f",&comprPista);
	printf("Informe numero de voltas:\n");
	scanf("%f",&nrVoltas);
	printf("Informe numero de reabastecimentos:\n");
	scanf("%f",&nrReab);
	printf("Informe consumo em km/l: \n");
	scanf("%f",&consumo);
	percTotKm = comprPista * nrVoltas / 1000;
	printf("Percurso total em km: %f\n", percTotKm);
	percReab = percTotKm / nrReab;
	printf("Percurso em km de cada reabastecimento: %f\n", percReab);
	litrosReab = percReab / consumo;
	printf("Minimo de litros ate primeiro reabastecimento: %f", litrosReab);
}
