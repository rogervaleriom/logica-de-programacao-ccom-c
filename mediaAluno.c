# include <conio.h>
# include <stdio.h>
# include <stdlib.h>


main () {
	float nota1, nota2, media;
	printf("Informe nota da primeira avaliacao: ");
	scanf("%f",&nota1);
	printf("Informe nota da segunda avaliacao: ");
	scanf("%f",&nota2);
	media = (nota1 + nota2) / 2;
	if (media >= 6) {
		printf("PARABENS! Voce foi aprovado.\n");
		printf("Sua media foi: %.2f", media);
	} else {
		printf("Voce nao foi aprovado.\n");
		printf("Sua media foi: %.2f", media);
	}
}
