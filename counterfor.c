#include <stdio.h>

int main ()
{
for (int i=1;i<=5;i++){
printf("%d의 제곱은 %d입니다.\n", i , i*i); //for문 안에서 선언한 카운터는 내부만이 유효범위이다.
}

printf("6이상도 계산하겠습니다\n");

for (int j=6; j<=10; j++) {
printf("%d의 제곱은 %d입니다.\n", j , j*j);
}







return 0 ;
}


