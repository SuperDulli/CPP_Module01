#include <string>
#include <iostream>
#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name)
	: m_name(name), m_weapon(NULL) {}

void	HumanB::setWeapon(Weapon& weapon) {
	this->m_weapon = &weapon;
}

void	HumanB::attack(void) const {
	if (!m_weapon) {
		std::cout << m_name << " is unarmed" << std::endl;
		return ;
	}
	std::cout
	<< m_name << " attacks with their " << m_weapon->getType()
	<< std::endl;
}
