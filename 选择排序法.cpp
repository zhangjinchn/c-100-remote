#include <stdio.h>
int main()
{
	int i,j,b;
	int a[10];
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	for(i=0;i<9;i++)
	{	for(j=i+1;j<10;j++)
        {
		    if(a[i]>a[j])
        	{   b=a[i];
        		a[i]=a[j];
        		a[j]=b;	
        	}
        	
        }		
	}
	
	for(i=0;i<10;i++)
	printf("%3d ",a[i]);
}

