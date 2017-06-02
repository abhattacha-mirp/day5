#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter number of rows:"<<endl;
	cin>>n; 
	for(int i=1;i<=n;i++){
		for(int a=0,sum=0;sum<=i,a<i;a++){
			sum=sum+i;
			cout<<"*"<<sum;
		}
		cout<<""<<endl;
	}
}
