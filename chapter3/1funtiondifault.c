//함수의 인수에 디폴트값 설정가능
//프로토 타입에서의 설정
double GetCircleArea(int radius = 1 , double pi =  3.14);
//함수의 정의에서의 설정
double GetCircleArea(int radius , double pi );
double GetCircleArea(int radius = 1 , double pi =  3.14);
{
return radius * radius * pi ;
}
//호출
int main()
{
double area;
area = GetCircleArea(); //디폴트값 그대로
area = GetCircleArea(10); // 첫 인수 변경
area = GetCircleArea(10,3.14159); // 두 인수 변경
//설정시의 주의점
//마지막인수 부터 차례대로 설정해 가야함.
//마지만인수를 건너띄고 디폴트값 설정시 에러
//호출시의 주의점
//특정 인수를 생략하면 이후 인수가 모두 생략됨.
//첫번째 인수를 생략하고 뒤에 인수를 지정시 에러

