#include <iostream>
#include <string>
using namespace std;

class human{
	public:
		human(){
			cout<<"constructor called  "<<endl;
		}
		
		~human(){
			cout<<"destructor  called  "<<endl;
		}
	};
	
	
	int main(){
		human *akx;
		akx=new human();
		delete akx;
		return 0;
	}
