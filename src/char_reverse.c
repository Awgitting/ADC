
#include <stdio.h>
int main(void)
{
	int i;
	char str[6] = "hello";
	char reverse_str[6] = "";
	printf("Original Char is %s\n", str);
	for (i = 0; i < 5; i++)
	{
		reverse_str[5-i] = str[i];
		printf("The str[%d] value is %c.\n",i,str[i]);
		printf("The reverse_str[%d] value is %c.\n",5-i,reverse_str[5-i]);
	}
	printf("Trial reverse char is %s\n", reverse_str);
	return 0;
}


/* Fix Solution 1 ..........................................................

#include <stdio.h>
int main(void)
{
        int i;
        char str[6] = "hello";
        char reverse_str[6] = "";
        printf("Original Char is %s\n", str);
        for (i = 0; i <= 4; i++)
        {
                reverse_str[4-i] = str[i];
                printf("The str[%d] value is %c.\n",i,str[i]);
                printf("The reverse_str[%d] value is %c.\n",4-i,reverse_str[4-i]);
        }
        printf("Trial reverse char is %s\n", reverse_str);
        return 0;
}
..........................................................*/


/* Fix Solution 2 ..........................................................

#include <stdio.h>
#include <string.h>
int main(void)
{
        int i;
        char str[6] = "hello";
        char reverse_str[6] = "";
        printf("Original Char is %s\n", str);
        int strsize=strlen(str);
        for (i = 0; i < strsize; i++)
        {
                reverse_str[strsize-1-i] = str[i];
                printf("The str[%d] value is %c.\n",i,str[i]);
                printf("The reverse_str[%d] value is %c.\n",5-i,reverse_str[5-i]);
        }
        printf("Trial reverse char is %s\n", reverse_str);
        return 0;
}
..........................................................*/
