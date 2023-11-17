#include<iostream>
using namespace std;

int main()
{
	int num,sum=0,rev;
	
	cout<<"the number is : ";
	cin>>num;
	
	while(num>0)
	{
		rev = num%10;
		sum = sum*10+rev;
		num = num/10;
	}
	
	cout<<"the reverse num is: "<<sum;
}
