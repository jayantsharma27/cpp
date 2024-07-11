#include<iostream>
using namespace std;
int main(){
	int a[10],i,b[10],p1,p2,p4,p;
	cout<<"enter the 4 bits";
	cin>>a[3];
	cin>>a[5];
	cin>>a[6];
	cin>>a[7];
	a[1]=a[3]^a[5]^a[7];
	a[2]=a[3]^a[6]^a[7];
	a[4]=a[5]^a[6]^a[7];
	for(i=1;i<8;i++){
		cout<<a[i];
	}
	cout<<"enter the message received at receiver";
	for(i=1;i<8;i++){
		cin>>b[i];
	}
	p1=b[1]^b[3]^b[5]^b[7];
	p2=b[2]^b[3]^b[6]^b[7];
	p4=b[4]^b[5]^b[6]^b[7];
	p=p1+2*p2+4*p4;
	if(p==0){
		cout<<"no error";
	}else{
		cout<<"error at"<<p<<"\n";
		cout<<"correct is:";
		if(b[p]==0){
			b[p]=1;
		}else{
			b[p]=0;
		}
		for(i=1;i<8;i++){
			cout<<b[i];
		}
	}
	
	return 0;
}
