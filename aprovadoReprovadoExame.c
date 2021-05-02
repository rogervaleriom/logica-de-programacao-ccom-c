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
		printf("APROVADO.\n");
	} else {
		if (media < 3) {		
			printf("REPROVADO.\n");
		} else {
			printf("EM EXAME.\n");
		}
	}
	printf("Media: %.2f", media);
}
