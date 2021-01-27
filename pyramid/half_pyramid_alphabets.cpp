#include<iostream>
using namespace std;

int main(){
	int i,j,n;
	cout<<"Enter the no of rows : ";
	cin>>n;
	for(i=0;i<=n;i++)
	{
		for(j=0;j<i;j++)
		{
			printf("%c ",'A'+j);
		}
		cout<<"\n";
	}
}

// Output

// Enter the no of rows : 5
// 
// A
// A B
// A B C
// A B C D
// A B C D E
