#include <stdio.h>
#include <math.h>

/*
*This is the first program which I am coding
*/
// Just a little excited about it :)

char *pref = "Hello";
char sign = 'L';
char name[] = "Sally";
int year = 2016;
float goal_a = 8888.8888;
double goal_b = 9999.9999;
int yearnumber;
int Singlex;
float roundx;
int xx;
int dnum;
int tx;
int ty;
int xrange, xnum;
//int main(int argc, char *argv[])

void separator()
{
	printf("\n***********************************************\n");
}
void dseparator();
void dseparator()
{
	separator();
	separator();
}
void cacul(int x1, int x2)
{
	int xt=(x1+x2-1)/x2;
	printf("The caculation result of %d and %d is: %d.\n",x1,x2,xt);
}
int increase(int x)
{
	x=x+1;
	return x;
}
void Ryear(int x)
{
	if (x%400 == 0)
	{
		printf("The Year %d is a Run Year!\n", x);
	}
	else if ( x%4 == 0 && x%100 != 0)
	{
		printf("The Year %d is a Run Year!\n",x);
	}
	else
	{
		printf("The Year %d is NOT a Run Year!\n",x);
	}
}
int EnterYear()
{
	int yearnumber;
	printf("Enter your favorite year number (>0): ");
        scanf("%d",&yearnumber);
	return yearnumber;
}
void SingleNo(int x)
{
//	printf("Please enter another number to split the different number: ");
//	scanf("%d",&x);
	int x1=x%10;
	int x2=x/10%10;
	printf("The specified number %d 's first bit is %d, second bit is %d .\n",x,x1,x2);
}
void Xround(double x)
{
	double ceilR = ceil(x);
	double floorR = floor(x);
	printf("The specified number %f entered is proceeded as Ceil %f, Floor %f .\n",x,ceilR,floorR);
}
void printDay(int dnum)
{
	switch(dnum)
	{
		case 1:printf("It is Monday.\n");break;
		case 2:printf("It is Tuesday.\n");break;
		case 3:printf("It is Wednesday.\n");break;
		case 4:
		case 5:printf("Week Day!\n");break;
		case 6:
		case 7:printf("Weekend!\n");break;
		default:printf("Not found.\n");break;
	}
}

void maxtnumber(int x, int y)
{
	if(x%y == 0)
	{
		printf("The max twice number is: %d.\n", y);
	}
	else
	{
		maxtnumber(y, x%y);
	}
}


int main(void)
{

//	char *pref = "Hello";
//	char sign = 'L';
//	char name[] = "Sally";
//	int year = 2016;
//	float goal_a = 8888.8888;
//	double goal_b = 9999.9999;
	year=increase(year);
	float total_c;
	int xa=8, xb=3;
	int total=xa/xb;
	int xtotal=(xa+xb-1)/xb;
	int ytotal=1+((xa-1)/xb);
	separator();
	printf("Hey there, could you please let me know your name?:\n");
	scanf("%s",name);
	printf("%s, welcome to my world, %c.%s!\r\n", pref,sign,name);
	printf("And I know your first goal is %f , and your second goal is %f in year %d!\n", goal_a, 3*goal_b, year);
	printf("Hey, welcome %c to my world. %d, %f\r\n",'%',655322,35.22322);
	printf("And the math caculation trial is like: %f.\n",total_c=goal_a+200);
	printf("The floor math result of %d and %d is: %d : %d : %d.\n",xa, xb, total, xtotal,ytotal);
	printf("The character caculation of A or 9 plus one number is: %d: ASCII %c.\n",'b','z'-5);
	#include <math.h>
	printf("The function involvement like sin is: %f, log is %f\n", sin(3.1416/2),log(1.0));
	cacul(goal_a,goal_b);
	separator();

	printf("Now let's try a little game, you give a year number and I'll get the Run Year caculation.\n");
	
/*
	Entering:printf("Enter your favorite year number (>0): ");
	scanf("%d",&ryear);
	if(ryear<=0) goto Entering; 
	Ryear(ryear);
*/
	yearnumber=EnterYear();
	while(yearnumber<=0)
	{
		printf("The Year %d You Entered is NOT Valid!\n",yearnumber); 
		yearnumber=EnterYear();
	}
	Ryear(yearnumber);
        printf("Please enter another number to split the different number: ");
        scanf("%d",&Singlex);
	SingleNo(Singlex);


        printf("Please enter another number to caculate the round number: ");
        scanf("%f",&roundx);
        Xround(roundx);
	for(xx=1;xx<=100;xx++)
	{
		printf("%d",xx);
	}
	
	separator();
	printf("Please enter a day number to cover for week name: ");
	scanf("%d",&dnum);
	printDay(dnum);

        separator();
        printf("Please enter two numbers to caculate the max tnumber: ");
        scanf("%d %d",&tx,&ty);
        maxtnumber(tx,ty);

	return 0;
}
