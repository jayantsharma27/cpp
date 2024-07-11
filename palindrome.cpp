# include <iostream>
using namespace std;
int main(){
	int i,n,a[10],b[10],f;
	cout<<"Enter the size of the array";
	cin>>n;
	cout<<"Enter the elements of the array";
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	for(i=0;i<n;i++){
		cout<<a[i];
	}
	for(i=0;i<n;i++){
		b[i]=a[n-1-i];
	 }
	 f=0;
	for(i=0;i<n;i++){
		if(a[i]!=b[i]){
		f++;	
		}
	}
	if(f>0){
		cout<<"not a palindrome";
	}
	else{
		cout<<"palindrome";
	}
	
	return 0;
} 
