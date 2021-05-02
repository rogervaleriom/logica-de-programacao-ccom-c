#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

main () {
	int idadeM1, idadeM2, idadeH1, idadeH2, idMV, idMN, idHV, idHN, somaHVMN, produtoHNMV;
	printf("Informe a primeira idade de mulher: ");
	scanf("%d",&idadeM1);
	printf("Informe a segunda idade de mulher: ");
	scanf("%d",&idadeM2);
	printf("Informe a primeira idade de homem: ");
	scanf("%d",&idadeH1);
	printf("Informe a segunda idade de homem: ");
	scanf("%d",&idadeH2);
	if ((idadeM1 > 0) && (idadeM2 > 0)) {
		if (idadeM1 > idadeM2) {
			idMV = idadeM1;
			idMN = idadeM2;
		} else {
			idMV = idadeM2;
			idMN = idadeM1;
		}
	} 
	if ((idadeH1 > 0) && (idadeH2 > 0)) {	
		if (idadeH1 > idadeH2) {
			idHV = idadeH1;
			idHN = idadeH2;
		} else {
			idHV = idadeH2;
			idHN = idadeH1;
		}		
	}
	somaHVMN = idHV + idMN;
	produtoHNMV = idHN * idMV;
	printf("Soma das idades do homem mais velho com a mulher mais nova: %d\n", somaHVMN);
	printf("Produto das idade do homem mais novo com a mulher mais velha: %d", produtoHNMV);
}
