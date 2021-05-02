# include <conio.h>
# include <stdio.h>
# include <stdlib.h>

main () {
	float empreg, salMin, custo, vendidas, valVendas, custoTot, comissaoTot, comissaoEmp, salFinal, lucro;
	printf("Informe numero de empregados da loja:\n");
	scanf("%f",&empreg);
	printf("Informe valor do salario minimo:\n");
	scanf("%f",&salMin);
	printf("Informe preco de custo de cada bicicleta:\n");
	scanf("%f",&custo);
	printf("Informe numero de bicletas vendidas:\n");
	scanf("%f",&vendidas);
	valVendas = custo * 1.5 * vendidas;
	printf("Total de vendas: %f\n", valVendas);
	custoTot = custo * vendidas;
	printf("Custo total: %f\n", custoTot);
	comissaoTot = custoTot * 15 /100;
	printf("Comissao total: %f\n", comissaoTot);
	comissaoEmp = comissaoTot / empreg;
	printf("Comissao para cada empregado: %f\n", comissaoEmp);
	salFinal = 2 * salMin + comissaoEmp;
	printf("Salario final de cada empregado: %f\n", salFinal);
	lucro = valVendas - custoTot - (empreg * salFinal);
	printf("Lucro: %f", lucro);	
}
