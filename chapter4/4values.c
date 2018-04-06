#include <iostream>
using namespace std;
struct Person
{
	char name[50];
	int age; //구조체 같은 데이터의 정의
};
void printpersonref(const Person &psn) //참조에 의한 전달 // 큰 데이터, 함수쪽에서 인수 변경 x
{
	cout<<psn.name<<"씨"<<psn.age<<"세 입니다."<<endl;
}
void printpersonptr(const Person *psn) //어드레스에 의한 전달 // 큰 데이터, 함수쪽에서 인수변경 o
{
        cout<<psn->name<<"씨"<<psn->age<<"세 입니다."<<endl;
}
void printpersonval(const Person psn) //값에 의한 전달 // 작은 데이터, 함수쪽에서 인수 변경 x
{
	cout<<psn.name<<"씨"<<psn.age<<"세 입니다."<<endl;
}
int main()
{
Person age1 = {"shiori",18}; // 구조체 변수 초기화

printpersonref(age1);
printpersonptr(&age1);
printpersonval(age1);

return 0;
}
