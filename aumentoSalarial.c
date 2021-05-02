# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include <math.h>

main () {
	float sal, reaj, novoSal;
	printf("Informe salario do funcionario:\n");
	scanf("%f",&sal);
	if (sal <= 400.00) {
		reaj = sal * 15 / 100;
		novoSal = sal + reaj;
		printf("Novo salario: %.2f\n", novoSal);
		printf("Reajuste ganho: %.2f\n", reaj);
		printf("Em percentual: 15%%\n");		
	} else if (sal <= 800.00) {
		reaj = sal * 12 / 100;
		novoSal = sal + reaj;
		printf("Novo salario: %.2f\n", novoSal);
		printf("Reajuste ganho: %.2f\n", reaj);
		printf("Em percentual: 12%%\n");		
	} else if (sal <= 1200.00) {
		reaj = sal * 10 / 100;
		novoSal = sal + reaj;
		printf("Novo salario: %.2f\n", novoSal);
		printf("Reajuste ganho: %.2f\n", reaj);
		printf("Em percentual: 10%%\n");
	} else if (sal <= 2000.00){
		reaj = sal * 7 / 100;
		novoSal = sal + reaj;
		printf("Novo salario: %.2f\n", novoSal);
		printf("Reajuste ganho: %.2f\n", reaj);
		printf("Em percentual: 7%%\n");
	} else {
		reaj = sal * 4 / 100;
		novoSal = sal + reaj;
		printf("Novo salario: %.2f\n", novoSal);
		printf("Reajuste ganho: %.2f\n", reaj);
		printf("Em percentual: 4%%\n");
	}
	 		
			
}
