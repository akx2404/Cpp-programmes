#include <iostream>
using namespace std;

int main(){
	
	int n;
	
	cout<<"enter the number of elements--  ";
	cin>>n;
	
	
	int marks[n];
	int a;
	for(a=0;a<n;a++){
		cout<<" enter element number-"<<a<< "---    ";
		cin>>marks[a];
	}
	
	cout<<endl<<"your array is----  "<<endl<<"{ ";
	int i;
	for(i=0;i<n;i++){
		cout<<" "<<marks[i]<<" ";
	}
	cout<<" }";
}
