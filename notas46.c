# include <conio.h>
# include <stdio.h>
# include <stdlib.h>

main () {
	float nota1, nota2, media;
	int novoCalculo;
	do {
		do {
			printf("Informe nota da primeira avaliacao: ");
			scanf("%f", &nota1);
			printf("Informa nota da segunda avaliacao: ");
			scanf("%f", &nota2);
			if ((nota1 < 0 || nota2 < 0) || (nota1 > 10 || nota2 >10)) {
				printf("Nota(s)invalida(s). Devem estar entre 0 e 10.\n");
			}
		} while ((nota1 < 0 || nota2 < 0) || (nota1 > 10 || nota2 >10));
		media = (nota1 + nota2) / 2;
		printf("Media: %.2f\n", media);
		printf("NOVO CALCULO  1-Sim  2-Nao? ");
		scanf("%d",&novoCalculo);
	} while (novoCalculo == 1);
}
