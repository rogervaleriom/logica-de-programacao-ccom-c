# include <conio.h>
# include <stdio.h>
# include <stdlib.h>

main () {
	float eleitores, vBrancos, vNulos, vValidos, percBrancos, percNulos, percValidos;
	printf("Informe numero de eleitores:\n");
	scanf("%f",&eleitores);
	printf("Informe numero de votos brancos:\n");
	scanf("%f",&vBrancos);
	printf("Informe numero de votos nulos:\n");
	scanf("%f",&vNulos);
	printf("Informe numero de votos validos:\n");
	scanf("%f",&vValidos);
	percBrancos = 100 * vBrancos / eleitores;
	printf("Percentual de votos brancos: %f\n", percBrancos);
	percNulos = 100 * vNulos / eleitores;
	printf("Percentual de votos nulos: %f\n", percNulos);
	percValidos = 100 * vValidos / eleitores;
	printf("Percentual de votos validos: %f\n", percValidos);
}
