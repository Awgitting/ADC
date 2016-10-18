#include <stdio.h>
#include <math.h>

int xrange;
int xi;
int xj;

void pline()
{
	printf("\n- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - \n");
}

void NumTab1(int xrange)
{
        for(xi=1;xi<=xrange;xi++)
        {
                for(xj=1;xj<=xrange;xj++)
                {
                        printf("%d \t",xi*xj);
                }

                printf(" \n");
        }
}

void NumTab2(int xrange)
{
	for(xi=1;xi<=xrange;xi++)
	{
        	for(xj=1;xj<=xi;xj++)
        	{
                	printf("%d \t",xi*xj);
        	}

        	printf(" \n");
	}
}

int main()
{

printf("Please enter a number range and will generate a number map: ");
scanf("%d", &xrange);
pline();
NumTab1(xrange);
pline();
NumTab2(xrange);
pline();

return 0;

}
