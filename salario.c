# include <conio.h>
# include <stdio.h>
# include <stdlib.h>

main () {
	float SAL, REAJ, SALFINAL, PERC;
	printf("Digite o salario\n");
	scanf("%f",&SAL);
	printf("Digite o percentual de reajuste\n");
	scanf("%f",&PERC);
	REAJ = SAL * PERC / 100;
	SALFINAL = SAL + REAJ;
	printf("Novo salario: %.2f", SALFINAL);
}
