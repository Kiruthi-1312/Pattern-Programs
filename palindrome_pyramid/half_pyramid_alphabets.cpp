#include<iostream>
using namespace std;
int main()
{
	int i,j,k,n;
	cout<<"Enter the number of rows : ";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<char(j+64)<<" ";
		}
		for(k=i-1;k>=1;k--)
		{
			cout<<char(k+64)<<" ";
		}
		cout<<"\n";
	}
}

// Output
//
//Enter the number of rows : 5
//A
//A B A
//A B C B A
//A B C D C B A
//A B C D E D C B A
