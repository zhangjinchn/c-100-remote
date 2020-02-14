#include <stdio.h>
int main()
{
	int i;
	long long int s,sum;
	s=1,sum=0;
	for(i=1;i<=20;i++)
	 {
	 s=s*i;
	 sum=sum+s;
	 }
	 printf("%lld",sum);
} 
