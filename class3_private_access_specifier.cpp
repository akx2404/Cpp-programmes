#include <iostream>
using namespace std;

class human{
	private:
		int age;
		
	public:
		void Disp_age(){
			cout<<"my age is  -"<<age<<endl;
		}
		
		void Set_age(int val){
			age=val;
		}
		
};



int main(){
	human akx;
	akx.Set_age(19);
	akx.Disp_age();
}
