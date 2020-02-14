#include<stdio.h>
int main()
{
	int i,t;
	float s=0;
	float y=2,x=1;
	for(i=1;i<=20;i++)
	{    
	s=y/x+s;
	t=y;
	y=x+y;
	x=t;
	}
	printf("%8.7f",s);
	
} 
