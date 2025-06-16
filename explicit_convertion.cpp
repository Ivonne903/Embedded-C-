//Explicit conversion
//static_cast & reinterpret_cast

//type conversion and pointer casting


#include<iostream>
using namespace std;

int main()
{
	//example -1
	/*
	int i = 9999999;
	cout<<i<<endl;
	//How to perform explicit type conversion using static_cast keyword?
	float f;
	f = static_cast<float>(i);
	//f = reinterpret_cast<float>(i); //reinterpret_cast keyword in not for type casting.

	cout<<f<<endl;
	*/
	
	//example -2
	int i = -1;
	cout <<i<<endl;
	
	void* vp =&i;   //void pointers cannot be dereferenced.
	unsigned int *ui = static_cast <unsigned int*>(vp);
	cout <<*ui<<endl; //(2^31 -1) is the 2s complment of -1
	// we change the compiler interpretation of the data stored in memory using explicit conversions
	cout <<ui <<endl <<&i<<endl;
	
	unsigned int *ui1 = reinterpret_cast<unsigned int*>(&i);
	cout<<*ui1<<endl;
	
	return 0;
}
