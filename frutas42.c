#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

main () {
	float quantMor, quantMac, precoMor, precoMac, valorPago;
	printf("Informe a quantidade em kg de morangos: ");
	scanf("%f",&quantMor);
	printf("Informe a quantidade em kg de macas: ");
	scanf("%f",&quantMac);
	if (quantMor > 5) {
		precoMor = quantMor * 4.00;		
	} else {
		precoMor = quantMor * 5.00;	
	}
	if (quantMac > 5) {
		precoMac = quantMac * 2.00;		
	} else {
		precoMac = quantMac * 3.00;	
	}
	valorPago = precoMor + precoMac;
	printf("Valor total pago: R$ %.2f", valorPago);
}
