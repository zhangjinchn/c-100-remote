#include<stdio.h>
int main()
{
   int x,n,i,s=0;
   printf("������x��n\n");
   scanf("%d%d",&x,&n);
   printf("\n");
   s=x;
   for(i=1;i<=n;i++)
	{   
   	    printf("%d",x);
	    if(i!=n) 
	   	printf("+");
	   	x=x*10+s;
	}
} 
