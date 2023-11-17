#include<iostream>
using namespace std;

int main()
{
	int n, i, x=1, y=0, s=0;
	
	cout<<"enter the number of n : ";
	cin>>n;
	
	for(i=1; i<=n; i++)
	{
		cout<<"\n"<<s;
		
		s = x+y;
		
		x = y;
		
		y = s;
	}
}
