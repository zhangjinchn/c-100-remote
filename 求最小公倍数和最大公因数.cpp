#include<stdio.h>
int main()
{
    int i,j,m,n,t;
    printf("����������������m��n:"); 
    scanf("%d%d",&m,&n); 
    if(m>n) 
	    {    
			t=n;n=m;m=t; 
		}
    for(i=m;i>=1;i--)
    {
    if(m%i==0&&n%i==0)
	   {
	   		printf("���Լ��%d",i); break;
	   }
    }
    j=m*n/i;
    printf("��С������%d",j);
   return 0;
} 
