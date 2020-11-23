#include<iostream>
using namespace std;

int a,i,j;


int main(){
	cout<<"enter a number  ";
	cin>>a;
	
	
	for (i=a;i>=1;--i){
		for(j=1;j<i;j++){
			cout<<j<<" ";
		}
		cout<<endl;
	}
	return 0;
}
