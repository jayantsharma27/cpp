#include <iostream>
using namespace std;
int main(){
	int i,j,r,c;
	cout<<"Enter r";
	cin>>r;
	cout<<"Enter c";
	cin>>c;
	for(i=r-1;i>=0;i--)
	{
	for(j=0;j<c;j++)
	{
	if(i>=j)
	{
	 cout<<"*";
	}
	}
	cout<<"\n";
    }
	return 0;
}
