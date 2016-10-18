#include <stdio.h>

int main()
{
	int a[1];
	int b[1];
	int i, sum=0;
	for(i=1;i<=100;i++)
	{
		sum=sum+i;
		if(i==10)
		a[0]=sum;
		if(i==100)
		b[0]=sum;
	}
	printf("The result adds 1 to 10 is: %d.\nThe result adds 1 to 100 is: %d.\n",a[0],b[0]);

	return 0;
}
