#include<stdio.h>
int main()
{int i,j;
	for(i=1;i<=8;i++)
	{
	for(j=1;j<=8;j++)
	{
if(j==i||j==9-i)
{
	if(j==i)
		printf("\\");
			else
				printf("/");
			
}
		else
		printf("#");
	}
	printf("\n");	
	}
	return 0;
}


