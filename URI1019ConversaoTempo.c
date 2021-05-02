# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include <math.h>

main () {
	int N, min, hora, restSeg, restMin, restHora;
	scanf("%d", &N);
	min = N / 60;
	printf("%f\n", min);
	restSeg = N % 60;
	printf("%d\n", restSeg);
	restMin = min % 60;
	hora = min / 60;
	printf("%d\n", hora);
//	restHora = hora % 60;
//	printf("%f", restHora);
	// segFinal = restMin * 60;
	// printf("%f") 
	// hora = min / 60;
	// restHora = hora % 60;
	printf("%d:%d:%d\n", hora, restMin, restSeg);
}
