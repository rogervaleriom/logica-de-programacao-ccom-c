# include <conio.h>
# include <stdio.h>
# include <stdlib.h>

main () {
	int anoElec, anoNasc;
	printf("Informe o ano da eleicao: ");
	scanf("%d",&anoElec);
	printf("Informe o ano de nascimento: ");
	scanf("%d",&anoNasc);
	if ((anoElec - anoNasc) >= 16) {
		printf("Pode votar este ano: %d.", anoElec);
	} else {
		printf("Nao pode votar este ano: %d.", anoElec);
	}
}
