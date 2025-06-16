#include<iostream>
using namespace std;
constexpr int data = 100;

constexpr int sum(int a, int b)// These functions can be used to produce time results
{
	return(a+b);
}
constexpr int data2 = sum(45,56);

int main()
{
	cout<<data <<endl;
	cout<<data2<<endl;
	return 0;
}
