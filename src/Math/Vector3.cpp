#include "Vector3.h"

namespace MyEngine
{
	std::ostream& operator<<(std::ostream& lhs, const Vector3& rhs)
	{
		return lhs << "{ " << rhs.x << ", " << rhs.y << ", " << rhs.z << " }";
	}
}
