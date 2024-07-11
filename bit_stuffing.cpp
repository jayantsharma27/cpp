#include<iostream>
using namespace std;
int main(){
	int a[25],i,n,b[25],p,c,f;
	cout<<"enter the size of the bits";
	cin>>n;
	cout<<"enter the bits";
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	c=0;
	f=0;
	for(i=0;i<n-1;i++){
		b[i]=a[i];
		if(a[i+1]==a[i]&&a[i]==1){
		c++;	
		}
		if(c==5){
			b[i+1]=0;
			c=0;
		}
	}
	return 0;
}
