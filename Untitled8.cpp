#include<iostream>
using namespace std;

uint16_t conv(uint8_t x) //function to convert 8 bit to 16 bit
{
	uint16_t temp;
	temp = (uint16_t) x;
	return temp;
	
	
}

template<typename U, typename L>
U conv_1(L a)
{
	U temp;
	temp = (U)a;
	return temp;
}
int main(){
	uint8_t a = 0x30;
	cout << sizeof(a) <<endl;
	cout << sizeof(conv(a)) <<endl;
	
	uint16_t z = conv_1<uint16_t>(a);
	uint32_t v = conv_1<uint32_t>(a);
	cout << sizeof(z) << endl;
	cout << sizeof(v)<< endl;
	return 0;
}
//What is the scalability aspect of template function? How to validate?

