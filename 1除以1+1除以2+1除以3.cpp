#include<stdio.h>
int main()
{
	int i,n;
	float s=0;
	float y=1,x=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{    
		s=y/x;
		x++;
	    printf("%8.7f",s);
	    if(i!=n)
	    printf("+");
	}
	
	
} 
