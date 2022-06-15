#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(void) {
	std::cout << "Default Zombie Constructor called" << std::endl;
}

Zombie::Zombie(std::string name): m_name(name) {
	std::cout << "Zombie Constructor called" << std::endl;
}

Zombie::~Zombie(void) {
	std::cout << "Zombie Destructor called for " << this->m_name << std::endl;
}

void	Zombie::announce(void) const {
	std::cout << this->m_name << ": BraiiiiiiinnnzzzZ" << std::endl;
}

void	Zombie::setName(std::string name) {
	this->m_name = name;
}
