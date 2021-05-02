# include <conio.h>
# include <stdio.h>
# include <stdlib.h>

main () {
	int a, voto, chapa1, chapa2, brancos, valido;
	printf("Regras para a eleicao:\n");
	printf("1 - Chapa Situacao\n");
	printf("2 - Chapa Modificacao\n");
	printf("3 - Voto em Branco\n");
	chapa1 = 0;
	chapa2 = 0;
	brancos = 0;
	a = 1;
	do { 
		do { 
			valido = 0;
			printf ("Informe voto %d: ", a);
			scanf("%d", &voto);
			switch (voto) {			
				case 1: chapa1++;
						valido = 1;
						break;
				case 2: chapa2++;
						valido = 1;
						break;
				case 3: brancos++;
						valido = 1;
						break;
				default: printf("Opcao invalida.\n");
			} 
		} while (valido == 0);
		if (valido == 1) {
			a++;
		}
	} while (a <= 100);
	printf("Votos da Chapa 1 - Situacao: %d\n", chapa1);
	printf("Votos da Chapa 2 - Modificacao: %d\n", chapa2);
	printf("Votos em branco: %d\n", brancos);
	if (chapa1 == chapa2) {
		printf("Ocorreu empate.\n");
	} else if (chapa1 > chapa2) {
		printf("Vencedor: Chapa 1 - Situacao.\n");
	} else {
		printf("Vencedor: Chapa 2 - Modificacao.\n");	
	}
}
