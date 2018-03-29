//이름공간의 정의
//복수의 라이브러리 혹은 소스 파일을 사용할 때, 글로벌 함수나 변수의 이름이 중복되어 제대로 컴파일과 링크가 되지 않는 경우가 있음
orange.cpp	apple.cpp
int getprice()	int getprice()
{		{
return 50	return 100
}		}
// 양쪽에서 선언된 글로벌 함수 getprice > 링크에러
namespace orange	namespace apple
int getprice (){	int getprice(){
return 50 ;		return 100
}			}
// namespace 이름공간명으로 중복을 피할 수 있음
using namespace orang; // 이름공간 orange의 모든 식별자를 그대로 쓸 것임을 선언
//이름공간의 활용

