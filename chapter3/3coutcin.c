//cout 
#include <iostream>
std::cout << "Hello\nworld!\n;
// <<를 여러번 사용하면 값이나 변수를 동시에 여러 개 출력 가능 
//서식
std::cout.width(a); a 문자로 표시
std::cout.fill('b') b로 a를 채워서 표시(width와 같이사용됨)
std::cout.precision(c); 수치의 자리수를 c자리로 표시(공백과 소수점 제외)
ex std::cout.width(8);
std::cout.fill(3);
std::cout << 155.32; 
//숫자 뿐만 아니라 문자열에도 지정가능
//precision은 fill을 인식하지않는다.


//cin
int num
std::cin >> num;
// 입력된 수치를 num에 저장
char name[100];
std::cin >> name;
// 입력된 문자열을 name에 저장
// 스페이스나 탭 이후는 변수에 저장되지 않음.
// 한 줄을 모두 저장하기위해선 
char name[100];
std::cin.getline(name, sizeof(name));
//을 사용

//이점
//서식과 변수의 대응관계를 고려하지 않아도됨. 그리고 변수에 &를 붙였는지 신경쓸필요x
