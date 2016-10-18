#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void line()
{
	printf(".......................................................................\n");
}

int game()
{
	char s_gensture[3][10]={"scissor","stone","cloth"};
	int icheck, man, computer, result;
	srand(time(NULL));

	while(1)
	{
		computer=rand() % 3;
		line();
		printf("Noted: Enter '8' to quit game at any time!\n");
		printf("Please enter the gensture number (0-Scissor, 1-Stone, 2-Cloth) you want to 'Win': ");
		icheck=scanf("%d",&man);
		if(man ==8)
		{
			printf("Game Over!\n");
			break;
		}
		if(icheck != 1 || man < 0 || man > 2)
		{
			printf("The input is INVALID, need to be in number range 0-2.\n");
			continue;
		}
		printf("Well, now come to the result ......\n");
		printf("Your Gesture is *%s*, Computer Gesture is *%s*.\n",s_gensture[man],s_gensture[computer]);
		result=(man-computer+4)%3-1;
		if(result > 0)
		printf("Wow, --- You Win! ---\n");
		else if(result == 0)
		printf("Emmmm... --- It's DRAW ---\n");
		else
		printf("Opps... --- You Lose ---\n");

	}
	return 0;
}

int main()
{
	game();
	return 0;
}
