//인라인 함수
inline int MyCalc(int a, int b)
{
return a + b ;
}
int main()
MyCalc(10,20);

//인라인 함수의 정의 장소
//어느파일에서나 참조 가능하도록 헤더파일에 정의함.

//인라인함수로 만들면 좋은 것들
//처리 내용이 적은 함수들>전체 처리시간에 비해 호출까지의 시간의 비율이 크기때문
//호출 횟수가 많은 함수들>여러번 호출되는 작은 함수를 인라인으로 만들면 실행시간을 절약할 수 있음.

