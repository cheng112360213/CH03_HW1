#include<stdio.h>
#include<stdlib.h>
#include<time.h>
enum status{CONTINUE, WON, LOST};
int rollDice(void);
int main()
{
	int sum;
	int mypoint;
	enum status gamestatus;
	srand(time(NULL));
	sum = rollDice();
	switch (sum)
	{
	case 7:
	case 11:
		gamestatus = WON;
		break;

	case 2:
	case 3:
	case 12:
		gamestatus = LOST;
		break;
	default:
		gamestatus = CONTINUE;
		mypoint = sum;
		printf("Poit is %d\n", mypoint);
		break;
	}

	while (gamestatus == CONTINUE)
	{
		sum = rollDice();
		if (sum = mypoint)
		{
			gamestatus = WON;
		}
		else
		{
			if (sum == 7)
			{
				gamestatus = LOST;
			}
		}
	}

	if (gamestatus = WON)
	{
		printf("Player wins\n");
	}
	else
	{
		printf("Player loses\n");
	}
	system("pause");
	return 0;
}

int rollDice(void)
{
	int die1;
	int die2;
	int worksum;

	die1 = 1 + (rand() % 6);
	die2 = 1 + (rand() % 6);
	worksum = die1 + die2;
	printf("Player rolled %d + %d = %d\n", die1, die2, worksum);
	return worksum;
}

