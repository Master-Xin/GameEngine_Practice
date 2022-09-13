#include "Vector3.h"
#include <iostream>

namespace MyEngine
{
	class Light
	{
	public:
		Light() = default;
		Light(const Light& light)
		{
			this->m_orientation = light.m_orientation;
		}

		~Light() = default;

		Light& operator=(const Light& rhs)
		{ 
			this->m_orientation = rhs.m_orientation;
			return *this;
		}

		unsigned int getSpeed() const { return m_speed_mps; }
		Vector3 getOrientation() const { return this->m_orientation; }
		
		static const unsigned int m_speed_mps = 299792458;	// m/s

	private:
		Vector3 m_orientation;
	};

	void LightTest();
}
