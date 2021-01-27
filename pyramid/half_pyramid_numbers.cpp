#include<iostream>
using namespace std;

int main(){
	int i,j,n;
	cout<<"Enter the no of rows : ";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<j<<" ";
		}
		cout<<"\n";
	}
}


// Output 
//Enter the no of rows : 5
//1
//1 2
//1 2 3
//1 2 3 4
//1 2 3 4 5
