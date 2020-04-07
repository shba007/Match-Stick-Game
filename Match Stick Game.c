#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
	int nmc, nmu, tot = 21;
	system("cls");
	printf("Welcome to the match stick game. The rules are simple.\n");
	printf("\n1.You can only pick 1, 2, 3, 4 match at a time\n2.If you end up with 1 match you will lose.");
	printf("\n3.21 Match Stick Available\n");
	while (1)
	{
		printf("\nEnter the number of match stick you want to pick: ");
		scanf("%d", &nmu);
		if (nmu > 4)
		{
			printf("\nYou can only pick 1, 2, 3, 4 match at a time\n");
			continue;
		}
		tot = tot - nmu;
		printf("%d Match Stick Available", tot);
		if (tot < 2)
		{
			printf("\nYou Win the game");
			break;
		}
		nmc = 5 - nmu;
		Sleep(1500);
		printf("\n\nComputer picked %d match stick\n", nmc);
		tot = tot - nmc;
		printf("%d Match Stick Available\n", tot);
		if (tot < 2)
		{
			printf("\nYou Lose the game");
			break;
		}
	}
	getchar();
	return 0;
}
