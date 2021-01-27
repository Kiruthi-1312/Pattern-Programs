#include<iostream>
using namespace std;
int main()
{
	int i,j,n;
	cout<<"Enter the number of rows : ";
	cin>>n;
	cout<<"\n";
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			cout<<"* ";
		}
		cout<<"\n";
	}
}



//output

//Enter the number of rows : 5
//
//*
//*       *
//*       *       *
//*       *       *       *
//*       *       *       *       *
