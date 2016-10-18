#include <stdio.h>
#include <string.h>

void Draft_sort_sequence() // This draft function only does sort operation once, so not used for now.
{
	int seqnum[]={3,1,9,0,7,5,8,2};
	int seqsize=sizeof(seqnum)/4;
	int init;
	int nextnum;
	int temp;
	printf("Seqnum size is %d. \n",seqsize);

	printf("The original number is: ");
        for(init=0;init<seqsize;init++)
        {
               printf("%d ", seqnum[init]);
        }
	printf("\n");

	printf("The sorted number is: ");
	for(init=0;init<seqsize;init++)
	{
		temp=seqnum[init];
		nextnum=init+1;
		if(nextnum<seqsize && seqnum[init]>seqnum[init+1])
		{
			seqnum[init]=seqnum[init+1];
			seqnum[init+1]=temp;
		}
		printf("%d ", seqnum[init]);
	}
	printf("\n");
}

void Sorter()
{
	int seqnum[]={8,3,9,2,2,5,1,6,10,0};
	int seqsize=sizeof(seqnum)/4;
	int init;
	int exinit;
	int tmp;

	void Prtnumber()
	{
		for(init=0;init<seqsize;init++)
        	{
                	printf(" %d",seqnum[init]);
        	}
		printf("\n");
	}

	printf("The Original input is: ");
	Prtnumber();

	void IncreaseSorter()
	{
		for(init=1;init<seqsize;init++)
		{
			tmp=seqnum[init];
			exinit=init-1;
			while(exinit >= 0 && seqnum[exinit] > tmp)
			{
				seqnum[exinit+1]=seqnum[exinit];
				exinit--;
			}
			seqnum[exinit+1]=tmp;	
		}
		printf("The Increased Sort result is: ");
		Prtnumber();
		printf("The minimize number is %d.\n",seqnum[0]);
		printf("The second minimize number is %d.\n",seqnum[1]);
		
	}

	void DecreaseSorter()
        {
                for(init=1;init<seqsize;init++)
                {
                        tmp=seqnum[init];
                        exinit=init-1;
                        while(exinit >= 0 && seqnum[exinit] < tmp)
                        {
                                seqnum[exinit+1]=seqnum[exinit];
                                exinit--;
                        }
                        seqnum[exinit+1]=tmp;
                }
                printf("The Decreased Sort result is: ");
                Prtnumber();
		printf("The maximize number is %d.\n",seqnum[0]);
        }
	
	IncreaseSorter();
	DecreaseSorter();
}

int HalfSearch(int snumber)
{
	int nums[]={1,2,3,3,4,5,6,7,8,9,9,10};
	int numleng=sizeof(nums)/4,start=0,mid,end=numleng-1;
	printf("The nums length is %d.\n",numleng);
	numleng=sizeof(nums)/4;
	while(start <= end)
	{
		mid=(start+end)/2;
		if(nums[mid] > snumber)
		end=mid-1;
		else if(nums[mid] < snumber)
		start=mid+1;
		else
		{
			if(nums[mid-1] == snumber)
			return mid-1;
			else
			return mid;
		}
	}
	return -1;	
}

int main()
{
	Sorter();
	int SearchResult=HalfSearch(9);
	if(SearchResult != -1)
	printf("The array storage position of 9 is %d \n",SearchResult);
	else
	printf("Not Found!\n");
	return 0;
}
