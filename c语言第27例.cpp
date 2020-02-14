#include <stdio.h>
#include <math.h>
int main()
{
	int i;
	float s=0,x=1,y=1,t;
	for(i=1;i<=1000;i++)
	{   
	
		t=y/x*pow(-1,i-1);
		x++;
		s=s+t;	
		printf("%f",s);	
	} 

} 
