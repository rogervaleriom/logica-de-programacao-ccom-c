# include <math.h>
# include <conio.h>
# include <stdio.h>

main () {
	int Valor, Ant, Suc;
	printf("Digite um valor\n");
	scanf("%d",&Valor);
	Ant = Valor - 1;
	Suc = Valor + 1;
	printf ("O sucessor de %d eh o %d e o antecessor eh %d", Valor, Suc, Ant);
}
