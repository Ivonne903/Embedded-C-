#include<iostream>
using namespace std;


class A								//base class
{
	public:
			bool led;
			A(){					//default constructor
				led = true;
			}
			
			A(bool a) :led (a){		//argumented constructor
		
			}
			
			void status()
			{
				cout << "status of led is: " << led << endl;
				return;
			}
};

class B: public A
{
		public:
				B():A(){			//default constructor
			
				}
				
				void toggle()
				{
					A::led = !(A::led);
					return;
					
				}
		
		
};

int main()
{
	B obj1;
	obj1.status(); 		//invoking the member function of the base class
	obj1.toggle();
	obj1.status();
	return 0;
}
