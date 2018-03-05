
#include <stdio.h>
class OrangeBox	 	//클래스정의//
{
public :
	OrangeBox();	 //생성자 선언//

	void Add(int addorange); 	//멤버함수 선언//

	void Del(int delorange);

	void Empty();

	int GetTotal(){ 	

	    return total; //멤버함수 정의//

	}


private :
	int total;	//멤버 변수//
};



	OrangeBox::OrangeBox()//생성자 정의//
	{
	total = 0; //멤버변수 초기화//
	}


//멤버함수의 정의// 
void OrangeBox::Add(int addorange)
	{	
	total+=addorange;
	}

void OrangeBox::Del(int delorange)
	{
	total-=delorange;
	if (total<0) Empty();
	}
void OrangeBox::Empty()
	{
	total = 0 ;
	}
	

int main()
{
        OrangeBox myOrangeBox; //오브젝트를 생성//

	//myOrangeBox.Empty <위에 생성자를 통해 해결//
	myOrangeBox.Add(5);
	nt main()
{
        OrangeBox myOrangeBox;


myOrangeBox.Del(2);
	printf("상자 속의 오렌지 : %d 개\n", myOrangeBox.GetTotal());
	return 0;


}	
