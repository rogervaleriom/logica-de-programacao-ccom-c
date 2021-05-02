# include <conio.h>
# include <stdio.h>
# include <stdlib.h>

main () {
	int senha;
	printf("Informe a senha:\n");
	scanf("%d",&senha);
	if (senha == 1234)
		printf("ACESSO PERMITIDO");
	else
		printf("ACESSO NEGADO");
}
