#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter number of rows:"<<endl;
	cin>>n; 
	for(int i=1;i<=n;i++){
		for(int a=1;a<=(n-i+1);a++){
			cout<<"*";
	}
	for(int a=1;a>=1;a--){
		cout<<"*";
	}
	cout<<endl;
	}
}
