#include <stdio.h>
int main()
{
	int i,j,s=0;
	int a[3][3];
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	scanf("%d",&a[i][j]);
	for(i=0;i<3;i++)
	s=s+a[i][i];
	printf("%d",s);	
} 
