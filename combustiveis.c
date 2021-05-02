#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

main () {
	float litros, desconto, precoLitro, valorPago;
	int tipoComb;
	printf("Informe o tipo de combustivel    1.Alcool     2.Gasolina: ");
	scanf("%d",&tipoComb);
	printf("Informe a quantidade de litros: ");
	scanf("%f",&litros);
	if (tipoComb == 1) {
		if (litros > 20) {
			desconto = 4.03 * 0.05;
		} else {
			desconto = 4.03 * 0.03;
		}
		precoLitro = 4.03 - desconto;
	} else {
		if (litros > 15) {
			desconto = 4.53 * 0.06;
		} else {
			desconto = 4.53 * 0.035;
		}	
		precoLitro = 4.53 - desconto;
	}	
	valorPago = precoLitro * litros;
	printf("Valor pago total: %.2f", valorPago);
}
