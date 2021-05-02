# include <conio.h>
# include <stdio.h>
# include <stdlib.h>

main () {
	float pvenda, desc, promo;
	printf("Informe preco de venda: ");
	scanf("%f",&pvenda);
	desc = pvenda * 0.30;
	promo = pvenda - desc;
	printf("Preco com 30%% de desconto: %.2f\n", promo);
}
