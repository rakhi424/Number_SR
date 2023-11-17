#include<iostream>
using namespace std;







int main()
{
	int num, sum = 0, rev, save;
	
	cout<<"enter the number : ";
	cin>>num;
	
	save = num;
	
	while(num>0)
	{
		rev = num%10;
		sum = sum+rev*rev*rev;
		num = num/10;
	}
	
	cout<<"\n sum = "<<sum;
	
	if(sum == save)
	cout<<"\n number is a armstrong number";
	else
	cout<<"\n number is not a armstrom number";
}
