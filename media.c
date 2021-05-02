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
	if ( M >= 6){
		system ("color 02");
		printf ("Parabens! Aprovado.\n");
		system("pause");
		system("cls");
		system ("color 06");
		printf ("Media: %.1f", M);
		}
	else
	  	printf ("Reprovado");
}
