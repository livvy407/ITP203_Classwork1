#include<stdio.h>

int main()
{
	int i;
	int number;
	int count;

	printf("Prime number that exists between 2 to 200 are: ");

	for(int number=2; number<=200; number++)
	{
		count = 0;
		for(int i=2; i<=number/2; i++)
		{
			if( number%i == 0 )
			{
				count++;
				break;
			}
		}
		if(count==0 && number != 1)
		{
			printf("%d\n", number);
		}
	}
}