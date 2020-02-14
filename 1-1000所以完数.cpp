#include<stdio.h>
int main()
{
	int i,j;
	printf("1-1000的所有完数为：\n");
	for(i=1;i<1000;i++)
	{
	    int s=0;
	for(j=1;j<i;j++)
		
		if(i%j==0)
			s=s+j;
	   
		if(s==i)
		printf("%d\n",i);
	}
} 
