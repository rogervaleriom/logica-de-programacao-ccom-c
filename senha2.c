# include <conio.h>
# include <stdio.h>
# include <stdlib.h>

main () {
	int senha;
	printf("Informe a senha: ");
	scanf("%d",&senha);
	if (senha == 268474) {
		printf("ACESSO PERMITIDO.");
	} else {
		printf("ACESSO NEGADO. Senha invalida.");
	}
}
