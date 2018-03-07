#include<stdio.h>

void Swap(int *a, int *b)
{
if (*a==*b)
{
return;
}

int buf = *a ;
*a = *b;
*b= buf;

}

int main()
{

int a=2,b=1;
int *c=&a,*d=&b;

printf("%d,%d\n",a,b);

Swap(c,d);

printf("%d,%d\n",a,b);

return 0;
}










