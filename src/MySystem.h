#pragma once

#include <string.h>
#include <iostream>

namespace MyEngine
{
	inline bool MyMemcpy(void *pSrc, unsigned int srcContentSize, void *pDest, unsigned int destBufferSize = 0)
	{
		// abnormal situation
		if(!pSrc || !pDest || !srcContentSize)
		{
			return false;
		}

		// if destBufferSize is not specified
		if(!destBufferSize)
		{
			destBufferSize = srcContentSize;
		}

#if _WIN32
		// if memory copy is successfully done, memcpy_s returns 0
		return (memcpy_s(pDest, destBufferSize, pSrc, srcContentSize) == 0);
#elif __linux__
		if(!memcpy(pDest, pSrc, srcContentSize))
		{
			return false;
		}
		return true;
#else
		std::cout << "unsupported platform" << std::endl;
		return false;
#endif

	}

	void MySystemTest_1();
}