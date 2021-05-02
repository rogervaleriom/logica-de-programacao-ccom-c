# include <conio.h>
# include <stdio.h>
# include <stdlib.h>

main () {
	int senha, senhaval;
	senhaval = 238056;
	printf("Digite a senha:\n");
	scanf("%d",&senha);
	if ( senha == senhaval)
		printf ("Senha correta!");
	else
	    printf ("Senha incorreta!");
}

