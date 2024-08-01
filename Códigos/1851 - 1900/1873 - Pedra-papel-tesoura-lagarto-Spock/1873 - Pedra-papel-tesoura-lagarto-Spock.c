#include <stdio.h>
#include <string.h>

int main()
{

	int c;
	char rajesh[9], sheldon[9];

	scanf("%d", &c);
	
	while (c--)
	{
		scanf("%s %s", rajesh, sheldon);
		
		if (strcmp(rajesh, "tesoura") == 0 && strcmp(sheldon, "papel") == 0) printf("rajesh\n");
		else if (strcmp(rajesh, "tesoura") == 0 && strcmp(sheldon, "lagarto") == 0) printf("rajesh\n");
		else if (strcmp(rajesh, "papel") == 0 && strcmp(sheldon, "pedra") == 0) printf("rajesh\n");
		else if (strcmp(rajesh, "papel") == 0 && strcmp(sheldon, "spock") == 0) printf("rajesh\n");
		else if (strcmp(rajesh, "pedra") == 0 && strcmp(sheldon, "lagarto") == 0) printf("rajesh\n");
		else if (strcmp(rajesh, "pedra") == 0 && strcmp(sheldon, "tesoura") == 0) printf("rajesh\n");
		else if (strcmp(rajesh, "lagarto") == 0 && strcmp(sheldon, "spock") == 0) printf("rajesh\n");
		else if (strcmp(rajesh, "lagarto") == 0 && strcmp(sheldon, "papel") == 0) printf("rajesh\n");
		else if (strcmp(rajesh, "spock") == 0 && strcmp(sheldon, "pedra") == 0) printf("rajesh\n");
		else if (strcmp(rajesh, "spock") == 0 && strcmp(sheldon, "tesoura") == 0) printf("rajesh\n");
		else if (strcmp(rajesh, sheldon) == 0) printf("empate\n");
		else printf("sheldon\n");
	}

    return 0;
}
