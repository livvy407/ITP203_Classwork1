#include<stdio.h>

int main()
{
	int i;
	int sum = 0;

	for(int i=0; i<=20; i++)
	{
		if( i%2==1 )
		{
			continue;
		}
		sum = sum + 1;
	}
	printf("%d\n",sum);
	return 0;
}