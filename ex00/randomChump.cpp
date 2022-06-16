#include <string>
#include "Zombie.hpp"

void randomChump(std::string name) {
	Zombie chump = Zombie();
	chump.setName(name);
	chump.announce();
}
