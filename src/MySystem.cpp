#include "MySystem.h"

namespace MyEngine
{
	void MySystemTest_1()
	{
		char testSrcArray[1024];
		char pTestDest[1024];

		unsigned int sizeOfDestBuffer = sizeof(testSrcArray);
		if(!MyMemcpy(testSrcArray, sizeof(testSrcArray), pTestDest, sizeOfDestBuffer))
		{
			std::cout << "MyMemcpy failed!" << std::endl;
		}
		else
		{
			std::cout << "MyMemcpy succeeded!" << std::endl;
		}

		std::cin.get();
	}
}