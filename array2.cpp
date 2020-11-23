#include<iostream>
using namespace std;

int main(){
	
	
	int n;
	int i,j,k;
	int count =0;
	
	cout<< "Enter the length of the array ---  ";
	cin >> n;
	
	char s[n];
	
	for (i=0; i<n; i++){
		cout<< "Enter the element number " << i+1 << " --  ";
		cin >> s[i];
	}
	
	for (j=0; j<n; j++){
		if (s[j]%2 ==0){
			count ++;
		}
	}
	
	cout <<"your list --  ";
	for (k=0; k<n; k++){
		if (k == n-1){
			cout<<s[k]<<endl<<endl;
		}
		else{
			cout<<s[k]<<", ";
		}
		
	}
	
	cout<< "There are "<< count << " even numbers in your list/array. "<< endl;
	cout<< "There are "<< sizeof(s) - count << " odd numbers in your list/array. "<< endl;
	
}








