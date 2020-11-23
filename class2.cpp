#include <iostream>
using namespace std;

class human{
public:
	string name;
	void intr();
};

void human :: intr(){
	cout<< human::name<< endl;
}

int main(){
	human akx;
	akx.name="akx";
	akx.intr();
	
	return 0;
}


