#include <stdio.h>
int main()
{
	char a[5];
	char x;
	int i;
	printf("������һ����ĸ��") ;
	for(i=0;i<5;i++)
	{
	    scanf("%c",&a[i]);
    }
	printf("������ɾ������ĸ��") ;
	scanf("%*c%c",&x);
	for(i=0;i<5;i++)
	{
	if(a[i]!=x)
    printf("%c",a[i]);
    }
}

