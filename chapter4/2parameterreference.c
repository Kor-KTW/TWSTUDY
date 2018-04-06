#include <iostream> 

using namespace std;

void ChangeValue(double &a)
{	
a = 200;
}
	int main()
	{
	double num1 = 100;
	cout << "num1 = " << num1 << endl;
	
	ChangeValue(num1);
	cout << "num1 = " << num1 << endl;

	}
