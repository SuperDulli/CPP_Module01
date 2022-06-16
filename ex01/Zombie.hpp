#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>

class Zombie {

	public:

		Zombie(void);
		Zombie(std::string name);
		~Zombie(void);

		void	announce(void) const;

		void	setName(std::string name);

	private:

		std::string	m_name;
};

#endif
