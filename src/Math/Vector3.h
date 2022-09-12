#include <iostream>

namespace MyEngine
{
	class Vector3
	{
	public:
		float x {0.f};
		float y {0.f};
		float z {0.f};

	public:
		Vector3() = default;
		Vector3(const Vector3& vector3)
		{
			this->x = vector3.x;
			this->y = vector3.y;
			this->z = vector3.z;
		}
		Vector3(float x_, float y_, float z_): x(x_), y(y_), z(z_) {}

		~Vector3() = default;

		// rhs is "right hand side" 右值
		Vector3& operator=(const Vector3& rhs)
		{ 
			this->x = rhs.x;
			this->y = rhs.y;
			this->z = rhs.z;
			return *this;
		}
	};

	std::ostream& operator<<(std::ostream& lhs, const Vector3& vector3);
}