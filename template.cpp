#include<iostream>
using namespace std;

template<typename U>
void f(U x)
{
	cout <<x << endl;
}

int main()
{
	int a = 20;
	f(a);
	
	
	float b = 3.434343f;
	f(b);
	
	return 0;
}

// How to create a simple template functio? How to access it in the main program?
// "templte" and "typename"


