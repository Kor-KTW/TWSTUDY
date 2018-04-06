#include <iostream>
using namespace std;
void KeepValue(const double &a)
{
cout<< a << endl;

//a = 200;컴파일 에러
}
int main()
{
double num1 =100;
KeepValue(num1);


return 0;
}


