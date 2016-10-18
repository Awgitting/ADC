#include <stdio.h>

char Tstack[512];
int top=0;

void Tpush(char cc)
{
	Tstack[top++]=cc;
}

char Tpopo()
{
	return Tstack[--top];
}

int is_empty()
{
	return top == 0;
}

int main()
{
	Tpush('a');
	Tpush('b');
	Tpush('c');
	while(!is_empty())
	{
		putchar(Tpopo());
	}
	printf("\n");

	return 0;
}
