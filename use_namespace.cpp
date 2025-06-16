#include<iostream>
using namespace std;

/*namespace botany
{
	string cell;
};

namespace Zoology
{
	string cell;
};
*/

namespace led
{
	namespace led_mcal
	{
		//GPIO - General purpose input and ouput register
		uint32_t Mode_portA;
		uint32_t Set_portA;
		uint32_t Clr_portA;
		
	}
	namespace led_hal
	{
		void init_portA()
		{
			led_mcal::Mode_portA = 0x0000000F; // Set as an ouput
			
		}
		
		void Set_portA()
		{
			led_mcal::Set_portA = 0x0000000F; //High
		}
		
		void Clr_portA()
		{
			led_mcal::Clr_portA = 0x0000000F; // Low
		}
		
	}
}
int main()
{
	/*{
		using namespace botany;
		cell = "plant cell";
		cout <<cell<<endl;
	}
	
	{
		using namespace Zoology;
		cell = "animal cell";
		cout<<cell<<endl;
	}
	*/
	// turn on the led and turn of the led for once
	// initialized the port
	led::led_hal::init_portA();
	
	//turn on the led
	led::led_hal::Set_portA();
	
	//turn off the Led
	led::led_hal::Clr_portA();
	
	return 0;
}
