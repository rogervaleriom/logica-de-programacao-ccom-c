# include <conio.h>
# include <stdio.h>
# include <stdlib.h>

main () {
	int ano;
	printf("Informe ano de nascimento:\n");
	scanf("%d", &ano);
	if (2020 - ano >= 16)
		printf("Pode votar.");
	else
		printf("Nao pode votar.");
}
