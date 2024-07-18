#include <stdio.h>
#include <string.h>
int main(){
	
	int mes;
	char January[9] = "January\0", February[10] = "February\0", March[7] = "March\0", April[7] = "April\0";
	char May [5] = "May\0", June [6] = "June\0", July[6] = "July\0", August[8] = "August\0", September[11] = "September\0";
	char October[9] = "October\0", November[10] = "November\0", December[10] = "December\0";
		
	scanf("%d", &mes);
	
	switch (mes) {
		case 1: printf("%s\n", January);
		break;
		case 2: printf("%s\n", February);
		break;
		case 3: printf("%s\n", March);
		break;
		case 4: printf("%s\n", April);
		break;
		case 5: printf("%s\n", May);
		break;
		case 6: printf("%s\n", June);
		break;
		case 7: printf("%s\n", July);
		break;
		case 8: printf("%s\n", August);
		break;
		case 9: printf("%s\n", September);
		break;
		case 10: printf("%s\n", October);
		break;
		case 11: printf("%s\n", November);
		break;
		case 12: printf("%s\n", December);
		break;
	}

	return 0;
}