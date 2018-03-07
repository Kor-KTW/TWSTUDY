
.
.
.
.
.
.

void ChangeString(const char *ptr)
{
char *buf;
buf = ptr;
}
.
.
.
.


//char형 포인터 변수 buf를 만들고 const 지정을한 포인터ptr을 buf에 대입하려고하면, error .
//
//buf[0] = 'b' ; 와 같이 대입할 수 있게되기때문에  포인터의 내용이 변하기때문.
