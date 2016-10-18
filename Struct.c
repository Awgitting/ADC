#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
//#bbranch

int xi;
int xj;
int ar[8];
int br[8];
struct Vars
{
	int xrange;
	char *header;
};

int disstruct(struct Vars sx)
{
	return sx.xrange;
}

void PrintVar(struct Vars pvar)
{
	printf("The variable range of struct is: %d.\n", pvar.xrange);
	printf("The variable header of struct is: %s.\n", pvar.header);
}
void PointVar(struct Vars *pvar)
{
         printf("The variable range of struct is: %d.\n", pvar->xrange);
         printf("The variable header of struct is: %s.\n", pvar->header);
}
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

void print_day(int day)
{
	char wday[8][10]={"","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
	if(day<1||day>7) printf("The day number entered is illegal.\n");
	printf("%s\n",wday[day]);
}

int main()
{
struct Vars vt,vx={.header="2"};
vt.header="Please enter a number range and will generate a number map: ";
printf("%s",vt.header);
scanf("%d", ar);
vx.xrange=ar[0];
pline();
NumTab1(vx.xrange);
pline();
NumTab2(vx.xrange);
pline();
int varreturn=disstruct(vt);
printf("Var return is %d.\n", varreturn);
PrintVar(vt);
PointVar(&vx);
int alp;

srand((unsigned)time(NULL));
for(alp=0;alp<8;alp++)
{
	br[alp]=ar[alp];
	printf("The process sequence is %d.\n",rand()%100+1);
}
for(alp=0;alp<8;alp++)
{

printf("The value of ar[%d] is %d. \n The value of br[%d] is %d.\n",alp,ar[alp],alp,br[alp]);

}

int n_day;
printf("Please enter a day number you like to print: ");
scanf("%d",&n_day);
print_day(n_day);

return 0;

}
