//같은 이름을 가진 함수를 여러 개 정의한다.
double GetCircleArea(int radius ,double pi)
{
return radius * radius * pi;
}
double GetCircleArea (double radius ,double pi)
{
return radius * radius * pi;
}
double GetCircleArea (double radius)
{
return radius * radius * 3.14;
}

//1과 2는 형태가 다르고, 3은 인수의 갯수가 다르다.

//오버로딩한 함수의 호출
int main()
{
int nRad = 10 ;
double area, fRad = 10.1
area = GetCircleArea(nRad ,3.14); // 첫번째 함수 호출
area = GetCircleArea(fRad ,3.14); // 두번째 함수 호출
area = GetCircleArea(fRad);	  // 세번째 함수 호출

//반환값의 형만 다른 함수는 오버로딩 불가.
//ex) int GCR(int rad, double pi), double GCR(int rad, double pi)

//오버로딩과 디폴트인수

//디폴트인수의 예
int sum( int a , int b , int c = 0)
{
return a + b + c;
}
 
//인수가 두개든 세개든 대응가능

//오버로딩의 예
double Avg(int a, int b)
{
return ( a + b ) / 2 ;
}

double Avg(int a ,int b , int c)
{
return ( a + b + c ) / 3 ;
}
