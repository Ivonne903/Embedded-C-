/*
What is inheritance?
What is polymorphism?
Whar is upcasting?
What is late binding along with the usage of virtual keyword?

*/

#include<iostream>
using namespace std;

/*class A
{
	public:
		int a;
		A():a(100){
			
		}	               //Default constructor
};

class B : public A
{
	public:
		B():A(){
		}
		void disp()
		{
			cout<< "class B" <<endl;
			cout<< "a is : " << a << endl;
		}
		
};
*/

class base
{
	public:
		int a;
		base():a(77){  //default constructor
		}
		
	virtual void disp()
		{
			cout << "It is base class " <<endl;
			cout << "a is : " << a << endl;
			
		}
};

class child : public base
{
	public:
		int b;
		child():base(),b(88){ // default constructor
		}
		
		void disp()
		{
			cout << "It is a child class " << endl;
			cout << "a is : "<< a << endl << "b is :"<< b << endl;
		}
		
};
void f(base& i){
	i.disp();
}
int main()
{
	/*B der;
	der.disp();
	*/
	/*
	base obj1;
	obj1.disp();
	
	child obj2;
	obj2.disp();
	*/
	
	base obj1;
	child obj2;
	
	/*f(obj1);
	f(obj2); // thi is called upcasting
	*/
	
	//base* ptr = &obj2;
	f(obj1);
	f(obj2); //there is a phenomenos called late binding in thos line of code
	
	return 0;
	
}

//many forms -> polymorphism

