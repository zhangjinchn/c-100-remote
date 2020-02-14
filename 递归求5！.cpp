#include <stdio.h>

int fac(int n)
{
	if(n==1)
		return 1;
    else
        return n=n*fac (n-1);
		
}
 main()
{
	int n,i,s;
	for(i=1;i<=5;i++)
	{
	s=fac(i);
    }
	printf("%d",s);

} 
