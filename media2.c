# include <conio.h>
# include <stdio.h>
# include <stdlib.h>

main () {
	float N1, N2, M;
	printf("Digite a primeira nota\n");
	scanf("%f",&N1);
	printf("Digite a segunda nota\n");
	scanf("%f",&N2);
	M = (N1 + N2) / 2;
	printf("Sua media eh %f \n", M);
	if (M >= 6) {
		printf("PARABENS! Voce foi aprovado.");
		}
	else {
		printf("Voce foi REPROVADO! Estude mais.");
		}
}

