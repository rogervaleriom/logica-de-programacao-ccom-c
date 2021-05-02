# include <conio.h>
# include <stdio.h>
# include <stdlib.h>

main () {
	float valor1, valor2;
	int oper;
	printf("Informe primeiro valor:\n");
	scanf("%f",&valor1);
	printf("Informe segundo valor:\n");
	scanf("%f",&valor2);
	printf("Informe operacao:    1.Adicao    2.Subtracao    3.Divisao    4.Multiplicacao\n");
	scanf("%d",&oper);
	if (oper == 1)
		printf("Resultado: %f", (valor1 + valor2));
	if (oper == 2)
		printf("Resultado: %f", (valor1 - valor2));
	if (oper == 3)
		printf("Resultado: %f", (valor1 / valor2));
	if (oper == 4)
		printf("Resultado: %f", (valor1 * valor2));
}
