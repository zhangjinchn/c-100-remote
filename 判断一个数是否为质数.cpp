#include<stdio.h>
int main()
{
	int i,j,n;
	int s=0;
	printf("�������������");
	scanf("%d",&n); 
	for(i=2;i<n;i++)
    {
    if(n%i==0)
    	s++;
    }
	if(s==0)		
			printf("%d��������",n);
    else
			printf("%d������",n);  
    
} 
