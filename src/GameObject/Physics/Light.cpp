#include "Light.h"
namespace MyEngine
{
	void LightTest()
	{
		std::cout << "光速（m/s）：" << std::endl;
		std::cout << Light::m_speed_mps << std::endl;

		Light light;
		std::cout << "光的方向：" << std::endl;
		std::cout << light.getOrientation() << std::endl;

		std::cin.get();
	}
}
