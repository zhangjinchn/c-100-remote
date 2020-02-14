#include<stdio.h>
int main()
{
	int i,j,s;
	for(i=1;i<=9;i++)
	{
		for(j=1;j<=i;j++)
		{
	      	s=i*j ;
		    printf("%d*%d=%-3d",j,i,s);
		} 	
		printf("\n");
   }
}
