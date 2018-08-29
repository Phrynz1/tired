// checking for prime numbers
#include <iostream>
using namespace std;
int main()
{
	int num, flag=0, i=2;
	cout<<"enter any positive number";
	cin>>num;
	while (i<num)
	{
		if (num%i==0)
		{
			flag =1;
			break;
		}
	}
	{
	// prime numbers has only two factors 1 and the number itself


	i=i+1;
    }
	if (flag==0)
	cout<<"number is prime";
	else
	cout<<"number is not prime";
	return 0;
}
