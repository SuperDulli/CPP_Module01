#ifndef WEAPON_H
#define WEAPON_H

#include <string>

class Weapon {
	
	public:

		Weapon(std::string type);
		~Weapon(void);

		std::string const&	getType(void) const;
		void				setType(std::string type);

	private:

		Weapon(void);

		std::string	m_type;
};

#endif
