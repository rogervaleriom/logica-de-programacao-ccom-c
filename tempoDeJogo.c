# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include <math.h>

main () {
	int ini, fim, duracao;
	printf("Informe hora inicial do jogo:\n");
	scanf("%d",&ini);
	printf("Informe hora final do jogo:\n");
	scanf("%d",&fim);
	if (ini == fim)
		printf("O JOGO DUROU 24 HORA(S).");
	else if (ini > fim) {
		duracao = 24 - ini + fim;
		printf("O JOGO DUROU %d HORA(S).", duracao);
	}
	else {
		duracao = fim - ini;
		printf("O JOGO DUROU %d HORA(S).", duracao);
	}
}
