#include <string>
#include "Weapon.hpp"

Weapon::Weapon(std::string type): m_type(type) {}

Weapon::~Weapon(void) {}

std::string const&	Weapon::getType(void) const { 
	return m_type;
}

void	Weapon::setType(std::string type) {
	m_type = type;
}
