#include<iostream>
using namespace std;
int main()
{
	int i,j,k,n;
	cout<<"Enter the number of rows : ";
	cin>>n;
	for(i=1;i<=n;i++)   //No of rows
	{
		for(j=1;j<=i;j++)  //Column 
		{
			cout<<j<<" ";
		}
		for(k=i-1;k>=1;k--) //Printing in reverse order
		{
			cout<<k<<" ";
		}
		cout<<"\n";
	}
}

// Output
// 
//Enter the number of rows : 5
//1
//1 2 1
//1 2 3 2 1
//1 2 3 4 3 2 1
//1 2 3 4 5 4 3 2 1
