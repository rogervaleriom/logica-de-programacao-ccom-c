# include <conio.h>
# include <stdio.h>
# include <stdlib.h>

main () {
	float nota1, nota2, media;
	printf("Informe primeira nota:\n");
	scanf("%f",&nota1);
	printf("Informe segunda nota:\n");
	scanf("%f",&nota2);
	media = (nota1 + nota2) / 2;
	printf("Media: %.1f\n", media);
	if (media >= 6.0)
		printf("APROVADO");
	else
		if (media >= 3.0)
			printf("em EXAME");
		else
			printf("REPROVADO");
}
