# include <conio.h>
# include <stdio.h>
# include <stdlib.h>

main () {
	float percReprC, percAprD, percReprD, nrReprC, nrReprD, nrAprD, percReprTot;
	printf("Turma C - 60 alunos         Turma D - 20 alunos\n");
	printf("Informe percentual de reprovados na turma C:\n");
	scanf("%f",&percReprC);
	printf("Informe percentual de aprovados na turma D:\n");
	scanf("%f",&percAprD);
	nrReprC = percReprC / 100 * 60;
	printf("Numero de alunos reprovados na turma C: %f\n", nrReprC);
	nrAprD = percAprD / 100 * 20;
	nrReprD = 20 - nrAprD;
	printf("Numero de alunos reprovados na turma D: %f\n", nrReprD);
	percReprD = nrReprD * 100 / 20;
	percReprTot = 100 * (nrReprC + nrReprD) / 80;
	printf("Percentual de reprovados total: %f", percReprTot);
}
