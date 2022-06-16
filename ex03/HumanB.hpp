#ifndef HUMAN_B_H
#define HUMAN_B_H

#include <string>
#include "Weapon.hpp"

class HumanB {

	public:

		HumanB(std::string name);

		void	setWeapon(Weapon& weapon);
		void	attack(void) const;

	private:

		std::string	m_name;
		Weapon*		m_weapon;

};

#endif
