#include<iostream>
#include<cstdint>
using namespace std;
class RGBA
{
	uint8_t m_red;
	uint8_t m_green;
	uint8_t m_blue;
	uint8_t m_alpha;
public: 

	RGBA(uint8_t r = 0, uint8_t g = 0, uint8_t b = 0, uint8_t a = 255)
	{
		m_red = r; m_green = g; m_blue = b; m_alpha = a;
	}
		

	void print()
	{
			cout << "r=" << int(m_red) <<" g=" << int(m_green) <<" b=" << int(m_blue) <<" a=" << int(m_alpha);
	}
};


int main()
{
	RGBA color(0, 135, 135);
	color.print();

	return 0;
}
