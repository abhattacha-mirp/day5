#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter number of rows:"<<endl;
	cin>>n; 
	for(int i=1;i<=n;i++){
		for(int a=1;a<=i;a++){
			cout<<"*";
	}
	cout<<""<<endl;
	}
}
