# include <conio.h>
# include <stdio.h>
# include <stdlib.h>

main () {
	int nrFilhos;
	float horasTrab, valorHora, percAdic, salInic, salFinal;
	printf("Informe horas trabalhadas no mes:\n");
	scanf("%f",&horasTrab);
	printf("Informe valor por hora:\n");
	scanf("%f",&valorHora);
	printf("Informe numero de filhos menores de 14 anos:\n");
	scanf("%d",&nrFilhos);
	percAdic = nrFilhos * 2;
	salInic = horasTrab * valorHora;
	salFinal = salInic + (salInic * percAdic / 100);
	printf("Salario final : %.2f", salFinal); 
}
