
namespace MyEngine
{
	class Quality
	{
	public:
		// constructor
		Quality() = default;
		Quality(unsigned int kg_): m_kg(kg_) {}
		Quality(const Quality& q_): m_kg(q_.m_kg) {}

		// destructor
		~Quality() = default;

		// assignment
		Quality& operator=(const Quality& q_)
		{ 
			this->m_kg = q_.m_kg;
			return *this; 
		}

		// accessor
		unsigned int getQualityKg() const { return this->m_kg; }
		void setQualityKg(unsigned int kg_) { this->m_kg = m_kg; }

	private:
		unsigned int m_kg;
	};
}
