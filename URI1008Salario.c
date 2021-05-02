# include <conio.h>
# include <stdio.h>
# include <stdlib.h>

main () {
	int nrFunc, horasTrab;
	float valorHora, salario;
	scanf("%d", &nrFunc);
	scanf("%d", &horasTrab);
	scanf("%f", &valorHora);
	salario = horasTrab * valorHora;
	printf("NUMERO = %d\n", nrFunc);
	printf("SALARIO = R$ %.2f", salario);
}
