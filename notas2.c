# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include <math.h>

main () {
	float nota1, nota2, media;
	printf("Informe primeira nota:\n");
	scanf("%f", &nota1);
	printf("Informe segunda nota:\n");
	scanf("%f", &nota2);
	media = (nota1 + nota2) / 2; 
	printf("Media: %f\n", media);
	if (media >= 6)
		printf("PARABENS! Voce foi aprovado");
	else
		printf("Voce foi REPROVADO! Estude mais.");
}
