#include <iostream>
#include <string>
using namespace std;

class human{
	private:
		string *name;
		int *age;
		
	public:
		human(string iname, int iage){
			name = new  string;
			age = new int;
			
			*name= iname;
			*age= iage;
			
			
		}
		
	void display(){
		cout<<"hi, I am "<<*name<<" and  i am "<<*age<<" years old"<<endl;
		}
		
		~human(){
			delete name;
			delete age;
			cout<<"all memories are released"<<endl;
		}
};


int main(){
	human *akx=new human("akx",19);
	akx->display();
	delete akx;
}
