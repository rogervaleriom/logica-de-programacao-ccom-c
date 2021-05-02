# include <conio.h>
# include <stdio.h>
# include <stdlib.h>

main () {
	int ANO;
	printf("Digite o ano de nascimento\n");
	scanf("%d",&ANO);
	if ((2020 - ANO) >= 16 )
		printf("Pode votar este ano.");
	else
		printf("Nao pode votar este ano.");
}
