# include <conio.h>
# include <stdio.h>
# include <stdlib.h>

main () {
	float iniDia, fimDia, litros, valTot, kmRod, medConsu, gastoComb, lucro;
	printf("Informe marcacao do odometro no inicio do dia:\n");
	scanf("%f",&iniDia);
	printf("Informe marcacao do odometro no fim do dia:\n");
	scanf("%f",&fimDia);
	printf("Informe numero de litros de combustivel gasto:\n");
	scanf("%f",&litros);
	printf("Informe valor total recebido dos passageiros:\n");
	scanf("%f",&valTot);
	kmRod = fimDia - iniDia;
	medConsu = kmRod / litros;
	printf("Media de consumo de combustivel: %f\n", medConsu);
	gastoComb = litros * 2.50;
	lucro = valTot - gastoComb;
	printf("Lucro no final do dia: %f", lucro);
}
