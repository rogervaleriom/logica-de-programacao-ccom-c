# include <conio.h>
# include <stdio.h>
# include <stdlib.h>

main () {
	float salAtual, percReaj, valorReaj, salReaj;
	printf("Informe o salario mensal:\n");
	scanf("%f",&salAtual);
	printf("Informe percentual de reajuste:\n");
	scanf("%f",&percReaj);
	valorReaj = salAtual * percReaj / 100;
	salReaj = salAtual + valorReaj;
	printf("Salario reajustado: %.2f: ", salReaj);	
}
