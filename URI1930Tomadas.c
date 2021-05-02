# include <conio.h>
# include <stdio.h>
# include <stdlib.h>

main () {
	int T1, T2, T3, T4, apar1, apar2, apar3, apar4, aparTot;
	scanf("%d %d %d %d", &T1, &T2, &T3, &T4);
	// printf("T1 = %d\n", T1);
	// printf("T2 = %d\n", T2);
	// printf("T3 = %d\n", T3);
	// printf("T4 = %d\n", T4);
	apar1 = T1 - 1;
	apar2 = T2 - 1;
	apar3 = T3 - 1;
	apar4 = T4;
	aparTot = apar1 + apar2 + apar3 + apar4;
	printf("%d", aparTot);
	
}
