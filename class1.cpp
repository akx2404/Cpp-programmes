#include <iostream>
using namespace std;

class human{
	public:
		string name;
		void intr(){
			cout<<"hello.. I am "<<name<<endl;
		}
};




int main(){
	human akshad;
	akshad.name="akshad";
	akshad.intr();
}
