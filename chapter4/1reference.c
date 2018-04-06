#include <iostream>

using namespace std;
int main() 
{
	int num = 0;
	int &newnum = num; 
//newnum :별명 num : 참조 대상이되는 변수, 별명은 참조의 대상이되는 변수와 동일한 형태로 선언해야함.
	num = 13;
	cout <<"num = " << num <<endl;
	cout <<"newnum = "  << newnum <<endl;
 
	newnum = 2013;
        cout <<"num = " << num <<endl;
        cout <<"newnum = "  << newnum <<endl;

	return 0;
}
//참조의 대상과 별명은 한쪽 값을 변경하면 다른 한 쪽 값도 동일하게 변경됨

