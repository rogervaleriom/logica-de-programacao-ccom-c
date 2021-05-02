# include <conio.h>
# include <stdio.h>
# include <stdlib.h>

main () {
	float PRECOANT, PRECOPROM, DESC;
	printf("Digite o preco da mercadoria\n");
	scanf("%f",&PRECOANT);
	DESC = PRECOANT * 0.3;
	PRECOPROM = PRECOANT - DESC;
	printf("Preco promocional com desconto de 30%: R$ "": %.2f", PRECOPROM);
}
