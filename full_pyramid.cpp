#include<iostream>
using namespace std;

int main(){
	int i,j,n;
	
	cout<<"Enter the no of rows : ";
	cin>>n;
	
	for(i=1;i<=n;i++){
		for(j=1;j<=n-i;j++){
			cout<<" ";
		}
		for(int k = 1;k<=2*i-1;k++)
		cout<<" * ";
		
		cout<<"\n";
	}
	
	
	return 0;
}


//Output

//Enter the no of rows : 4
//    *
//   *  *  *
//  *  *  *  *  *
// *  *  *  *  *  *  *
