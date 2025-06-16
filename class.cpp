#include<iostream>
using namespace std;

//Ex1 is tp demosntrate the keywords private and public

class A{
	private:
				//data members
				int a;
				float b;
				//member functions
				void incre()                  //private member function
				{
					a++;
					b++;
					return;
				}
	public:
			 	//data members
			 	string n;
			 	// member functions
			 	void disp()                       //public member function
			 	{
			 		cout <<a<< endl;
			 		cout <<b<< endl;
			 		cout <<n<< endl;
			 		incre();                       //accessed private member function
			 		
			 		return;
				}
};

//Ex2 is to demostrate constructor and desturctor of the class
class B
{
	private:
				int c;
				string n;
	
	public:
				B() //defalt constructor
				{
					c = 10;
					n = "rollex";
					//doesn´t have a return statement
					
				}
				B(int a, string b)
				{
					c = a;
					n = b;
					
				}
				~B()
				{
					cout <<"destructor"<<endl;
				}
				void disp()
				{
					cout<< c << endl;
					cout<< n << endl;
					return;
					
				}
		
	
	
};
int main(){
	//Ex1
	A obj1; 
	obj1.disp();
	obj1.disp();
	
	//Ex2
	B obj2, obj3(43, "tum tum");
	obj2.disp();
	obj3.disp();
	
	//Ex3
	B obj4(obj3); //deep copy
	obj4.disp();
	B& obj5 = obj4; //shallow copy
	obj5.disp();
	
	cout << &obj3 << endl;
	cout << &obj4 << endl;
	cout << &obj5 << endl;
	
	return 0;
	
}
