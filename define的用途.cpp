#include<stdio.h>
#define MAX
#define MAXIMUM(x,y)(x>y)?x:y
#define MINIMUM(x,y) (x>y)?y:x
int main()
{
    int a=10,b=20;
#ifdef MAX
    printf("����������� %d\n",MAXIMUM(a,b));
#else
    printf("��С�������� %d\n",MINIMUM(a,b));
#endif
#ifndef MIN
    printf("��С�������� %d\n",MINIMUM(a,b));
#else
    printf("����������� %d\n",MAXIMUM(a,b));
#endif
#undef MAX
#ifdef MAX
    printf("����������� %d\n",MAXIMUM(a,b));
#else
    printf("��С�������� %d\n",MINIMUM(a,b));
#endif
#define MIN
#ifndef MIN
    printf("��С�������� %d\n",MINIMUM(a,b));
#else
    printf("����������� %d\n",MAXIMUM(a,b));
#endif
    return 0;
}
