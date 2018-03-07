#include <stdio.h>
#include <string.h> 

//포인터에 const를 지정했을 때는 포인터가 가르키는 곳의 값이 상수가됨.
void DispString(const char *ptr) 
{
strcopy(ptr, "dog"); // ptr(cat) >dog -> error
}
int main()
{
char *buf= "cat" ; //ptr > cat 
DispString(buf);
return 0;
}
