#include<stdio.h>
int main()
{
	int x,y,z,t;
	printf("��������������\n"); 
	scanf("%d %d %d",&x,&y,&z);
	if(x>y)
       {
        t=x;x=y;y=t;
       }
	if(x>z)
	    {
	    t=x;x=z;z=t;
	    }
	if(y>z)	
	    {
	    t=y;y=z;z=t;
	    }
	printf("����������С�����˳��Ϊ��%d %d %d",x,y,z);
	
	
}
